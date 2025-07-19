#include<bits/stdc++.h>
using namespace std;
int SearchInsertPosition(vector<int>&arr,int n,int x){
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
 int answer=SearchInsertPosition(arr,n,x);
 cout<<answer<<endl;
}
/*
Time Complexity:

O(log n) (binary search divides the array in half each time)
Space Complexity:

O(1) (only a few variables used, no extra data structures)
*/