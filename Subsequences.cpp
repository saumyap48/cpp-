#include<bits/stdc++.h>
using namespace std;
void printS(int inde,vector<int>&ds,int s,int sum,vector<int>&arr,int n){
    if(inde==n){
        if(s==sum){
            for(int num: ds)
            cout<<num<<" ";
            cout<<endl;
        }
        return;
}
ds.push_back(arr[inde]);
s+=arr[inde];
printS(inde+1,ds,s,sum,arr,n);
s-=arr[inde];
ds.pop_back();
printS(inde+1,ds,s,sum,arr,n);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    vector<int>ds;
    printS(0,ds,0,sum,arr,n);
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
bool printS(int inde,vector<int>&ds,int s,int sum,vector<int>&arr,int n){
    if(inde==n){
        if(s==sum){
            for(int num: ds)
            cout<<num<<" ";
            cout<<endl;
            return true;
        }
        else
        return false;
}
ds.push_back(arr[inde]);
s+=arr[inde];
if(printS(inde+1,ds,s,sum,arr,n)==true){
    return true;
}
s-=arr[inde];
ds.pop_back();
if(printS(inde+1,ds,s,sum,arr,n)==true) return true;
return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    vector<int>ds;
    printS(0,ds,0,sum,arr,n);
    return 0;




