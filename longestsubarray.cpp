#include <bits/stdc++.h>
using namespace std;
int maximum_lengthsubarray(vector<int>&arr,int k){
    int n=arr.size();
    int l=0;
    int r=0;
    int sum=0;
    int maxlength=0;
    while(r<n){
        sum=sum+arr[r];
    if(sum>k){
        sum=sum-arr[l];
        l++;
    }
    if(sum<=k){
        maxlength=max(maxlength,r-l+1);
    }
    r++;
    }
    return maxlength;
}
int main() {
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }
  int k;
  cin>>k;
  int longestsubarray=maximum_lengthsubarray(arr,k);
  cout<<longestsubarray<<endl;
  
  return 0;
  
}