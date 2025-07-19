#include<bits/stdc++.h>
using namespace std;
int LowerBound(vector<int>&arr,int n,int x){
  int low=0, high=arr.size()-1;
  int answer=n;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]>=x){
        answer=mid;
        high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
}
int main(){
  int n,x;
  cout<<"Enter the number of elements int the array and the element to find lower bound: ";
  cin>>n>>x;
vector<int>arr(n);
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 int answer=LowerBound(arr,n,x);
 cout<<answer<<endl;
}
/*
Time Complexity:

The binary search loop divides the array in half each time.
O(log n)
Space Complexity:

Only a few variables are used, no extra data structures.
O(1)
Summary:

Time Complexity: O(log n)
Space Complexity: O(1)
*/