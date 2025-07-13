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
  set<int>s;
  for(int val:arr){
    s.insert(val);
  }
  int k=s.size();
  int j=0;
  for(int val:s){
    arr[j++]=val;
  }
  cout<<"Size of the array after removing duplicates: "<<k<<endl;
  for(int i=0; i<k; i++){
    cout<<arr[i]<<" ";

  }
}
/*
O(n log n)
Inserting each of the n elements into a set takes O(log n) 
time (per insertion), so total is O(n log n).
Copying unique elements back to the array takes O(n) time.
So, overall: O(n log n)
Space Complexity:

O(n)
The set stores up to n elements in the worst case
(if all are unique).
The original array also uses O(n) space, 
but that's input storage.
Auxiliary space: O(n) for the set.

*/