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
  }
  //Both when the array has negative and positive numbers
  //using the concept of prefix sum and hashing
  unordered_map<int,int>mp;
  int sum=0;
  int maxlength=0;
  for(int i=0; i<n; i++){
    sum+=arr[i];
    if(sum==k){
      maxlength=max(maxlength,i+1);
    }
    if(mp.find(sum-k)!=mp.end()){
      maxlength=max(maxlength,i-mp[sum-k]);
    }
    if(mp.find(sum)==mp.end()){
      mp[sum]=i;
    }
  }
  cout<<"Longest Subarray with Sum K: "<<maxlength<<endl;
}
/*
Time Complexity:

The loop runs once for all n elements.
All unordered_map operations (insert/find) are average O(1).
Overall: O(n)
Space Complexity:

The unordered_map can store up to n different prefix sums.
Overall: O(n)
Summary:

Time Complexity: O(n)
Space Complexity: O(n)
*/