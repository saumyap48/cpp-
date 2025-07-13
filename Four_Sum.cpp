#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>FourSum(vector<int>&arr,int target){
      int n=arr.size();
      set<vector<int>>Result;

      for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
          set<long long>Hashset;

          for(int k=j+1; k<n; k++){
            long long sum=arr[i]+arr[j]+arr[k];
            long long fourth=target-sum;

            if(Hashset.find(fourth)!=Hashset.end()){
             vector<int>temp={arr[i],arr[j],arr[k],(int)fourth};
             sort(temp.begin(),temp.end());
            
             Result.insert(temp);
            }
            Hashset.insert(arr[k]);
          }
        }
        }
        vector<vector<int>>answer(Result.begin(),Result.end());
        return answer;
      }
int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  int target;
  cout<<"Enter the value of the target";
  cin>>target;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
vector<vector<int>>answer=FourSum(arr,target);
   for(int i=0; i<answer.size(); i++){
  for(int j=0; j<answer[i].size(); j++){
        cout<<answer[i][j]<<" ";
  }
  cout<<endl;
 }
 return 0;
}
/*
Time Complexity:

O(n³ * log k)
Three nested loops: O(n³)
For each quadruplet found, inserting into a
 set takes O(log k), where k is the number of 
 unique quadruplets.
So, total: O(n³ * log k)
Space Complexity:

O(k + n)
O(k) for storing up to k unique quadruplets in 
the set and result vector.
O(n) for the temporary hash set used in each iteration.
Summary:

Time Complexity: O(n³ * log k)
Space Complexity: O(k + n)
(where n = array size, k = number of unique quadruplets)

*/