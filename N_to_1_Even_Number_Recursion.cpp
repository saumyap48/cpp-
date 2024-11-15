#include<bits/stdc++.h>
using namespace std;
void printeven(int num,int n){
if(num>n)
return;
printeven(num+2,n);
cout<<num<<endl;
}
int main(){
int n;
cin>>n;
printeven(2,n);
}

//Now By Using Only One argument
#include<bits/stdc++.h>
using namespace std;
void printeven(int n){
  if(n==2){
   cout<<n<<endl;
   return;
  } 
   cout<<n<<endl;
   printeven(n-2);
}
int main(){
int n;
cin>>n;
if(n%2==1)
n--;
printeven(n);
}
