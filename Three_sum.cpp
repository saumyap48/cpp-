#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ThreeSum(vector<int>&arr,int n){
  set<vector<int>>UniqueTriplet;
  for(int i=0; i<n; i++){
    unordered_set<int>s;
    for(int j=i+1; j<n; j++){
      int third=-(arr[i]+arr[j]);
    if(s.find(third)!=s.end()){
    vector<int>triplet={arr[i],arr[j],third};
    sort(triplet.begin(),triplet.end());
    UniqueTriplet.insert(triplet);
    }
     s.insert(arr[j]);
  }
  }
   vector<vector<int>> result(UniqueTriplet.begin(), UniqueTriplet.end());
    return result;
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
vector<vector<int>>answer=ThreeSum(arr,n);
   for(int i=0; i<answer.size(); i++){
  for(int j=0; j<answer[i].size(); j++){
        cout<<answer[i][j]<<" ";
  }
  cout<<endl;
 }
 return 0;
}
/*
O(n² * log k)
Outer loop runs O(n) times.
Inner loop runs O(n) times.
For each triplet found, you sort it (O(1) 
since triplet size is 3).
Inserting into a set of vectors takes O(log k),
 where k is the number of unique triplets.
So, overall: O(n² * log k) (usually written as O(n²) 
for interview purposes, but set insertion adds log k).
Space Complexity:

O(k + n)
O(k) for storing up to k unique triplets in the set
 and result vector.
O(n) for the temporary unordered_set used in each iteration.
Summary:

Time Complexity: O(n² * log k)
Space Complexity: O(k + n)
(where n = array size, k = number of unique triplets)
*/