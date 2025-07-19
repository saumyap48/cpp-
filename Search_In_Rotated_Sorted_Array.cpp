#include<bits/stdc++.h>
using namespace std;
int SearchInRotatedSortedArray(vector<int>&arr,int x){
  int low=0,high=arr.size()-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==x)
    return mid;
    if(arr[low]<=arr[mid]){
    if(arr[low]<=x && x<=arr[mid]){
      high=mid-1;
    }else{
    low=mid+1;
    }
    }
    else{
     if(arr[mid]<=x && x<=arr[high]){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
    }
  }
  return -1;
}
int main(){
      int n, x;
      cout<<"Enter the number of elements in the array and the element to search: ";      cin>>n>>x;
      vector<int>arr(n);
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
  int answer=SearchInRotatedSortedArray(arr,x);
  cout<<answer<<endl;

}
/*
Time Complexity:

Modified binary search, divides the array in half each time.
O(log n)
Space Complexity:

Only a few variables are used, no extra data structures.
O(1)
Summary:

Time Complexity: O(log n)
Space Complexity: O(1)
*/