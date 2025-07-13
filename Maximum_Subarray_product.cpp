#include<bits/stdc++.h>
using namespace std;
int maximumProductSubarray(vector<int>&arr,int n){
  int answer=INT_MIN;
  int suffix=1;
  int prefix=1;
  for(int i=0; i<n; i++){
    if(prefix==0)prefix=1;
    if(suffix==0)suffix=1;
    prefix*=arr[i];
    suffix*=arr[n-i-1];
    answer=max(answer,max(prefix,suffix));
  }
  return answer;
}
int main(){
  int n;
  cout<<"Enter the number of elements in the array:";
  cin>>n;
  vector<int>arr(n);
  cout<<"Enter the elements of the array:";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int answer=maximumProductSubarray(arr,n);
  cout<<"The maximum product of a subarray is: "<<answer<<endl;
}
/*
Time Complexity:

O(n)
You traverse the array once (single loop).
Space Complexity:

O(1)
Only a constant number of variables are used.
Summary:

Time Complexity: O(n)
Space Complexity: O(1)
*/