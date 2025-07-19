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
    unordered_map<int,int>mp;
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++){
      sum+=arr[i];
      if(sum==k){
        count++;
      }
      if(mp.find(sum-k)!=mp.end()){
        count+=mp[sum-k];
      }
      mp[sum]++;
    }
    cout<<"Subarrays with Sum k: "<<count<<endl; 
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