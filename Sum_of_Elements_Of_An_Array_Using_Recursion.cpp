#include<bits/stdc++.h>
using namespace std;
int print(vector<int>&arr, int index,int n){
    if(index==n){
        return 0;
    }
  return  arr[index]+print(arr,index+1,n);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   cout<<print(arr,0,n)<<endl;
}
