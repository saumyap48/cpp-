#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //if elements on the left half are still left//
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    //if elements on the right half are still left//
    while(right<=high){
        temp.push_back(arr[left]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}
void mergesort(vector<int>&arr,int low,int high){
    if(low>=high)return ;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int>arr={9,4,7,6,3,1,5};
    int n=7;
    cout<<"Before sorting Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(arr,0,n-1);
    cout<<"after sorting Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
