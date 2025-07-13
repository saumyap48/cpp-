#include<bits/stdc++.h>
using namespace std;
int MajorityElement(vector<int>&arr ,int n){
  unordered_map<int,int>freq;
  for(int i=0; i<n; i++){
    freq[arr[i]]++;
  }
  for(auto it=freq.begin(); it!=freq.end(); it++){
    if(it->second>n/2){
      return it->first;
    }
  }
  return -1;
}
int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
int answer=MajorityElement(arr,n);
cout<<answer<<endl;
}
/*
Time Complexity:

O(n)
You traverse the array once to build 
the frequency map, and then once over the map
 (which has at most n entries).
Space Complexity:

O(n)
You use an unordered_map to store 
the frequency of each element 
(in the worst case, all elements are unique).
Summary:

Time Complexity: O(n)
Space Complexity: O(n)

*/