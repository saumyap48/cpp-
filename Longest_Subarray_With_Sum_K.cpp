#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element in the array: ";
    cin>>n;
    int k;
   cout<<"Enter the value of K: ";
   cin>>k;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }  //Only for the case when the array does not have negative numbers
  //using the concept sliding window
  int left=0;
  int right=0;
  int sum=0;
  int maxlength=0;
  while(right<n){
    sum+=arr[right];
  while(left<=right &&sum>k){
    sum=sum-arr[left];
    left++;
  }
  if(sum==k){
    maxlength=max(maxlength,right-left+1);
  }
  right++;
}
  cout<<"Longest Subarray With Sum k: "<<maxlength<<endl;
}
/*
Time Complexity:

Each element is processed at most twice 
(once by the right pointer, once by the left pointer), 
so the total operations are O(n).
Overall: O(n)
Space Complexity:

Only a few variables are used, no extra data structures.
Overall: O(1)
Summary:

Time Complexity: O(n)
Space Complexity: O(1)
*/