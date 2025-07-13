#include<bits/stdc++.h>
using namespace std;
vector<int>TwoSum(vector<int>&arr,int target){
     int n=arr.size();
     unordered_map<int,int>mpp;
     for(int i=0; i<n; i++){
      int answer=target-arr[i];
      if(mpp.find(answer)!=mpp.end()){
        return {mpp[answer],i};
      }
      mpp[arr[i]]=i;
     }
     return{-1,-1};
    }
int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  int target;
  cout<<"Enter the value of target: ";
  cin>>target;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
vector<int>answer=TwoSum(arr,target);
for(int i=0; i<answer.size(); i++){
  cout<<answer[i]<<endl;
}
}
/*
Time Complexity:

O(n)
You traverse the array once, and each map operation (find/insert) is O(1) on average.
Space Complexity:

O(n)
You store up to n elements in the unordered_map.
Summary:

Time Complexity: O(n)
Space Complexity: O(n)
*/