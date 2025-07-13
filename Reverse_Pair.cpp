#include <bits/stdc++.h>
using namespace std;
int ReversePair(vector<int>&arr,int n){
  int count=0;
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>2*arr[j]){
        count++;
      }
    }
  }
  return count;
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
  int answer=ReversePair(arr,n);
  cout<<"The number of inversions in the array is: "<<answer<<endl;
  return 0;
  }
  /*
Time Complexity:

O(n²)
Two nested loops, each up to n.
Space Complexity:

O(1)
Only a constant number of variables are used.
Summary:

Time Complexity: O(n²)
Space Complexity: O(1)
  */