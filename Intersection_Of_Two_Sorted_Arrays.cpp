#include<bits/stdc++.h>
using namespace std;
vector<int>Intersection_OfArray(vector<int>&arr,vector<int>&arr1){
          int n=arr.size();
          int m=arr1.size();
          int i=0,j=0;
          vector<int>answer;
          while(i<n && j<m){
          if(arr[i]<arr1[j]){
            i++;
          }
          else if(arr1[j]<arr[i]){
            j++;
          }
          else{
            answer.push_back(arr[i]);
            i++;
            j++;
          }
        }
          return answer;
}
int main(){
  cout<<"Enter the number of elements in the first array:";
  int n;
  cin>>n;
  cout<<"Enter the number of elements in the second array:";
  int m;
  cin>>m;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
  vector<int>arr1(m);
  for(int i=0; i<m; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr1[i];
  }
 vector<int>answerr=Intersection_OfArray(arr,arr1);
   for(int val:answerr){
    cout<<val<<" ";
   }
}
/*
Time Complexity:

O(n + m)
You traverse both arrays once, comparing elements.
Space Complexity:

O(min(n, m))
In the worst case (all elements are common),
the answer vector can have up to min(n, m) elements.
Summary:

Time Complexity: O(n + m)
Space Complexity: O(min(n, m))

*/