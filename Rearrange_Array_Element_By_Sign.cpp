#include<bits/stdc++.h>
using namespace std;
vector<int>RearrangeArrayBySign(vector<int>&arr,int n){
  vector<int>positive,negative;
  for(int i=0; i<n; i++){
    if(arr[i]>=0){
      positive.push_back(arr[i]);
    }
    else{
      negative.push_back(arr[i]);
    }
  }
    for(int i=0; i<n/2; i++){
      arr[2*i]=positive[i];
      arr[2*i+1]=negative[i];
    }
    return arr;
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
  vector<int>ArrayBySign=RearrangeArrayBySign(arr,n);
  for(int i=0; i<n; i++){
    cout<<ArrayBySign[i]<<" ";
  }
}
/*
Time Complexity:

O(n)
You traverse the array once to separate positives 
and negatives (O(n)).
You traverse half the array to rearrange (O(n/2)),
which is also O(n).
Space Complexity:

O(n)
You use two extra vectors (positive and negative), 
each can store up to n/2 elements (in the worst case), 
so total extra space is O(n).
Summary:

Time Complexity: O(n)
Space Complexity: O(n)
*/