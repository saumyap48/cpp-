#include<bits/stdc++.h>
using namespace std;
vector<int>findLeaders(vector<int>&arr,int n){
      vector<int>answer;
      int maxi=arr[n-1];
      answer.push_back(arr[n-1]);
      for(int i=n-2; i>=0; i--){
        if(arr[i]>=maxi){
          maxi=arr[i];
          answer.push_back(arr[i]);
        }
      }
      reverse(answer.begin(),answer.end());
      return answer;
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
  vector<int>Leaders=findLeaders(arr,n);
  cout<<"The leaders in the array are:";
  for(int i=0; i<Leaders.size(); i++){
    cout<<Leaders[i]<<" ";
   }
  }
/*
Time Complexity:

O(n)
You traverse the array once from right to left.
You also reverse the answer vector, which is O(n).
So, total time is O(n).
Space Complexity:

O(n)
In the worst case (all elements are leaders), 
the answer vector will store all n elements.
Summary:

Time Complexity: O(n)
Space Complexity: O(n)

  */