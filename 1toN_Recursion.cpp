#include<bits/stdc++.h>
using namespace std;
void print(int num,int n){
    if(num==n){
        cout<<num<<endl;
        return;
    }
       cout<<num<<endl; 
        print(num+1,n);
      
}
int main(){
     int n;
     cin>>n;
     print(1,n);
}


//Now By using only one argument
#include<bits/stdc++.h>
using namespace std;
void print(int num){
    if(num==1){
        cout<<1<<endl;
        return;
    }
      print(num-1);
    cout<<num<<endl; 
  
      
}
int main(){
     int n;
     cin>>n;
     print(n);
}

