#include<bits/stdc++.h>
using namespace std;
vector<int>MajorityElement(vector<int>&arr,int n){
  vector<int>answer;
     unordered_map<int,int>freq;
     int mini=int(n/3)+1;
     for(int i=0; i<n; i++){
      freq[arr[i]]++;
      if(freq[arr[i]]==mini){
        answer.push_back(arr[i]);
      }
      if(answer.size()>2){
        break;
      }
     }
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
  vector<int>Answer=MajorityElement(arr,n);
   cout<<"Majority Element :";
  for(int i=0; i<Answer.size(); i++){
    cout<<Answer[i]<<" ";
  }
}
/*
Time Complexity:

O(n)
You traverse the array once to build 
the frequency map, and at most O(n) for checking/pushing
 to the answer vector.
Space Complexity:

O(n)
The unordered_map can store up to n unique elements 
in the worst case,
 and the answer vector at most 2 elements.
Summary:

Time Complexity: O(n)
Space Complexity: O(n)
*/