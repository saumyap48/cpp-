#include<bits/stdc++.h>
using namespace std;
vector<int>generated(int n){
  long long ans=1;
  vector<int>finalanswer;
  finalanswer.push_back(1);
  for(int i=0; i<n; i++){
    ans=ans*(n-i)/(i+1);
    finalanswer.push_back(ans);
  }
  return finalanswer;
}
void printpascalTraingle(int n){
  for(int row=0; row<n; row++){
   vector<int>answer=generated(row);
   for(int val: answer){
    cout<<val<<" ";
   }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter the number of rows :"<<endl;
  cin>>n;
  printpascalTraingle(n);
  return 0;
     
}
/*
Time Complexity:

O(n²)
For each row from 0 to n-1, you generate that row,
 which takes O(row) time.
Total time: O(1 + 2 + ... + n) = O(n²)
Space Complexity:

O(n) (per row)
Each row uses O(row) space, but at any time you
 only store one row in memory.
If you consider the output for all rows together, 
total space is O(n²).
Summary:

Time Complexity: O(n²)
Space Complexity: O(n) per row, O(n²) for all rows together
*/
