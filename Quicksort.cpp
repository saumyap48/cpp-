#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int pIindex=partition(arr,low,high);
        qs(arr,low,pIindex-1);
        qs(arr,pIindex+1,high);
    }
}
vector<int> quicksort(vector<int> arr){
    qs(arr,0,arr.size()-1);
    return arr;
}
int main(){
    vector<int> arr={4,6,2,5,7,9,1,3};
    int n=arr.size();
    cout<<"Before using quick sort:"<<endl; 
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr=quicksort(arr);
    cout<<"After using quick sort: "<<"\n";
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
    }