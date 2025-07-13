#include<bits/stdc++.h>
using namespace std;
void next_permutation(vector<int>&arr,int n){
  int index=-1;
  for(int i=n-2; i>=0; i--){
    if(arr[i]<arr[i+1]){
      index=i;
      break;
    }
    }
      if(index==-1){
        reverse(arr.begin(),arr.end());
        return;
      }
      for(int i=n-1; i>index; i--){
        if(arr[i]>arr[index]){
       swap(arr[i],arr[index]);
       break;
        }   
        reverse(arr.begin()+index+1,arr.end());
        return; 

}
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
  next_permutation(arr,n);
  for(int val:arr){
    cout<<val<<" ";
  }
}
/*
Time Complexity:

O(n)
The main operations (finding the index, finding the swap, and reversing the suffix) each take at most O(n) time.
Space Complexity:

O(1)
All operations are done in-place with only a constant amount of extra variables.
Summary:

Time Complexity: O(n)
Space Complexity: O(1)

*/