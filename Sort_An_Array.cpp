/*
 Dutch National Flag Algorithm (Short Notes)
 Purpose:
Sort an array containing only 0, 1, and 2 in one pass and O(1) space.

 Logic:
Use 3 pointers:

low → region for 0s

mid → current element

high → region for 2s

 Steps:

If arr[mid] == 0: swap with low, low++, mid++

If arr[mid] == 1: mid++

If arr[mid] == 2: swap with high, high-- (don’t move mid)

 Time: O(n)
 Space: O(1)
 Use case: Asked for quick sort of 0s, 1s, 2s without sorting function


*/
#include<bits/stdc++.h>
using namespace std;
void SortArray(vector<int>&arr,int n){
  int low=0,mid=0,high=arr.size()-1;
  while(mid<=high){
     if(arr[mid]==0){
      swap(arr[low],arr[mid]);
      mid++;
      low++;
     }
     else if(arr[mid]==1){
      mid++;
     }
     else{
      swap(arr[high],arr[mid]);
      high--;
     }
  }

}
int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
SortArray(arr,n);
for(int i=0; i<arr.size(); i++){
  cout<<arr[i]<<" ";
}

}
/*
Here is the time and space complexity for your
 Sort 0s, 1s, and 2s (Dutch National Flag Algorithm) code:

Time Complexity:

O(n)
You traverse the array once, making swaps in-place.
Space Complexity:

O(1)
The sorting is done in-place with only a few extra variables.
Summary:

Time Complexity: O(n)
Space Complexity: O(1)

*/