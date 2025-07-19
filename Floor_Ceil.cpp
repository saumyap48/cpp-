#include<bits/stdc++.h>
using namespace std;
int floor(vector<int>&arr,int n,int x){
  int low=0,high=arr.size()-1;
  int answer=-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]<=x){
      answer=arr[mid];
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  return answer;
}
int ceil(vector<int>&arr,int n,int x){
  int low=0,high=arr.size()-1;
  int answer=-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]>=x){
      answer=arr[mid];
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return answer;
}
int main(){
  int n,x;
  cout<<"Enter the number of elements int the array and the element to find lower bound: ";
  cin>>n>>x;
vector<int>arr(n);
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 int FloorValue=floor(arr,n,x);
 int CeilValue=ceil(arr,n,x);
 cout<<FloorValue<<endl;
 cout<<CeilValue<<endl;
}
/*
Time Complexity:

Each function uses binary search, which divides
 the array in half each time.
O(log n) for both floor and ceil.
Space Complexity:

Only a few variables are used, no extra data structures.
O(1)
Summary:

Time Complexity: O(log n)
Space Complexity: O(1)
*/
