#include<bits/stdc++.h>
using namespace std;
void print(int num,int n){
    if(num==n){
        cout<<num<<endl;
        return;
    }  
        print(num+1,n);
       cout<<num<<endl; 

      
}
int main(){
     int n;
     cin>>n;
     print(1,n);
}