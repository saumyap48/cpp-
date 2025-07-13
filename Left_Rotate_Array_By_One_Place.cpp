#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<i+1<<":";
    cin>>arr[i];
  }
  int first=arr[0];
  for(int i=0; i<n-1; i++){
  arr[i]=arr[i+1];
  }
  arr[n-1]=first;
cout<<"Array after left rotation by one place is: ";
for(int i=0; i<n; i++){
  cout<<arr[i]<<" "; 
}
}
/*
Time Complexity:

O(n)
You shift each element once, so the total number of operations is proportional to the array size.
Space Complexity:

O(1)
You only use a constant amount of extra space (the first variable), regardless of the array size.
Summary:

Time Complexity: O(n)
Space Complexity: O(1)

*/
