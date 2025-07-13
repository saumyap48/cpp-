#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
  int max=INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i]>max){
        max=arr[i];
    }
  }
  cout<<max<<endl;
  }
/*
Time Complexity:

O(n)
The code iterates through the array once to find the largest element.
Space Complexity:

O(n)
The code uses a vector to store all n elements of the array. No significant extra space is used.
Summary:

Time Complexity: O(n)
Space Complexity: O(n)

*/