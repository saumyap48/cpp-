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
    int count=0;
      for(int i=0; i<n; i++){
      int currentSum=arr[i];
      if(arr[i]==k){
        count++;
      }
    for(int j=i+1; j<n; j++){
      currentSum+=arr[j];
      if(currentSum==k){
        count++;
      }    
    }
    }
    cout<<count<<endl;
  }
/*
Time Complexity:

The outer loop runs n times.
The inner loop runs up to n times for each i.
So, total operations are O(n²).
Space Complexity:

Only a few variables are used, no extra data structures.
Overall: O(1)
Summary:

Time Complexity: O(n²)
Space Complexity: O(1)
  */