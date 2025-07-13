/*

Kadane’s Algorithm — Brief Interview Explanation (English)
 Problem
Find the maximum sum of a contiguous subarray from a 
given array (can contain negative numbers).
 Idea / Intuition
At each index, decide:

“Should I extend the current subarray, or start
 a new one from here?”

If the current running sum becomes negative,
 it won’t help the future, so we reset it.

How It Works
Initialize:

currentSum = 0

maxSum = INT_MIN (or arr[0])

Loop through the array:

Add current element to currentSum

If currentSum > maxSum, update maxSum

If currentSum < 0, reset currentSum = 0

 Time & Space Complexity
Time: O(n)

Space: O(1)


*/
#include<bits/stdc++.h>
using namespace std;
int MaxSum(vector<int>&arr,int n){
      int maxsum=INT_MIN;
      int current_sum=0;
      for(int i=0; i<n; i++){
        current_sum+=arr[i];
        maxsum=max(maxsum,current_sum);
        if(current_sum<0){
          current_sum=0;
        }
      }
      return maxsum;
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
int answer=MaxSum(arr,n);
cout<<answer<<endl;
}
/*
Time Complexity:

O(n)
You traverse the array once.
Space Complexity:

O(1)
Only a constant amount of extra space is used
 (for variables like maxsum and current_sum).
Summary:

Time Complexity: O(n)
Space Complexity: O(1)

*/