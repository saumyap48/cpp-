/*
only for arrays containing non-negative intergers
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    int left=0;
    int right=0;
    int sum=0;
    int count=0;
    while(right<n){
      sum+=arr[right];
      while(left<=right && sum>k){
        sum-=arr[left];
        left++;
      }
      if(sum==k){
        count++;
      }
      right++;
    }
    cout<<"Subarrays with Sum k: "<<count<<endl;
  }
  /*
  Time Complexity:

Each element is processed at most 
twice (once by right, once by left pointer).
Overall: O(n)
Space Complexity:

Only a few variables are used, no extra data structures.
Overall: O(1)
Summary:

Time Complexity: O(n)
Space Complexity: O(1)
  */