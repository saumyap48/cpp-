#include<bits/stdc++.h>
using namespace std;
int SearchInRotatedSortedArrayHavingDuplicates(vector<int>&arr,int x){
  int low=0,high=arr.size()-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==x)
    return mid;
    if(arr[low]==arr[mid] && arr[mid]==arr[high]){
      low++;
      high--;
      continue;
    }

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
  int answer=SearchInRotatedSortedArrayHavingDuplicates(arr,x);
  cout<<answer<<endl;

}
/*
Time Complexity:

In the worst case (when many duplicates),
each step may only reduce the search space by 1, so O(n).
In the average case (few duplicates), 
it behaves like binary search: O(log n).
Space Complexity:

Only a few variables are used, no extra data structures.
O(1)
Summary:

Time Complexity: O(n) worst case, O(log n) average case
Space Complexity: O(1)
*/