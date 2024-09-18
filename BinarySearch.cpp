#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>&arr,int target){
int n=arr.size();
int low=0; 
int high=n-1;
while (low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==target)return mid;
    else if(target>arr[mid])low=mid+1;
    else high=mid-1;
}
return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int search=BinarySearch(arr,target);
    if(search==-1)cout<<"the target is not present"<<endl;
    cout<<"The target is at index: "<<search<<endl;
    return 0;
}