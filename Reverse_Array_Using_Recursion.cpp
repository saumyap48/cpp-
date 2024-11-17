#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&arr, int index){
    if(index==-1){
        return;
    }
    cout<<arr[index]<<" ";
    print(arr,index-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    print(arr,n-1);
}
