#include<bits/stdc++.h>
using namespace std;
int firstoccurence(vector<int>&arr,int target){
    int n=arr.size();
    int low=0,high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return first;
}
int lastoccurence(vector<int>&arr,int target){
    int n=arr.size();
    int low=0,high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return last;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int first=firstoccurence(arr,target);
    if(first==-1){
    }
    int last=lastoccurence(arr,target);
    cout<<first<<" ";
    cout<<last<<" ";
}
