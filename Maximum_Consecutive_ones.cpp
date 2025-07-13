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
int total_count=0;
int max_count=0;
for(int i=0; i<n; i++){
  if(arr[i]==1){
    total_count++;
  }else{
    total_count=0;
  }
  max_count=max(max_count,total_count);
}
  cout<<max_count<<endl;
}
/*
Time Complexity:

O(n)
The code iterates through the array once to count consecutive 1s.
Space Complexity:

O(n)
The code uses a vector to store all n elements of the array. No significant extra space is used.
Summary:

Time Complexity: O(n)
Space Complexity: O(n)

*/