#include<bits/stdc++.h>
using namespace std;
int FindMinimumInRotatedSortedArray(vector<int>&arr){
  int low=0,high=arr.size()-1;
  int answer=INT_MAX;
  while(low<=high){
    int mid=low+(high-low)/2;
    if (arr[low] <= arr[high]) {
        // Whole segment is sorted
         answer = min(answer, arr[low]);
         break;
            }
    if(arr[low]<=arr[mid]){
    answer=min(answer,arr[low]);
      low=mid+1;
    }
    else{
      answer=min(answer,arr[mid]);
      high=mid-1;
    }
  }
  return answer;
}
int main(){
      int n;
      cout<<"Enter the number of elements in the array and the element to search: ";      cin>>n;
      vector<int>arr(n);
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
  int answer=FindMinimumInRotatedSortedArray(arr);
  cout<<answer<<endl;

}
/*Time Complexity:

Uses binary search, divides the array in half each time.
O(log n)
Space Complexity:

Only a few variables are used, no extra data structures.
O(1)
Summary:

Time Complexity: O(log n)
Space Complexity: O(1)
*/