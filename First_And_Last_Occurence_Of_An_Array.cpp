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
  return answer;
}
int UpperBound(vector<int>&arr,int n,int x){
  int low=0, high=arr.size()-1;
  int answer=n;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]>x){
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
  cout<<"Enter the number of elements in the array and the find the first and last occurrence of the element: ";
  cin>>n>>x;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int firstOccurrence=LowerBound(arr,n,x);
  int LastOccurrence=UpperBound(arr,n,x)-1;
  if(firstOccurrence==n || arr[firstOccurrence]!=x){
    cout<<"Element not found"<<endl;
  }else{
    cout<<"First Occurrence: "<<firstOccurrence<<endl;
    cout<<"Last Occurrence: "<<LastOccurrence<<endl;

  }

}
/*
Time Complexity:

Both LowerBound and UpperBound use binary search.
Each runs in O(log n) time.
Space Complexity:

Only a few variables are used, no extra data structures.
O(1)
Summary:

Time Complexity: O(log n)
Space Complexity: O(1)
*/