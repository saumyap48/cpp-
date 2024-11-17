#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&arr, int index, int n){
    if(index==n){
        return;
    }
    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    print(arr,0,n);
}
