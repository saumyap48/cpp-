#include<bits/stdc++.h>
using namespace std;
void print (int num,int n){
if(num>n)
return;
cout<<num<<endl;
print(num+2,n);
}
int main(){
int n;
cin>>n;
print(2,n);
}

//Now By Using Pnly One Argument
#include<bits/stdc++.h>
using namespace std;
void printeven(int n){
  if(n==2){
   cout<<n<<endl;
   return;
  }
   printeven(n-2);
   cout<<n<<endl;
}
int main(){
int n;
cin>>n;
if(n%2==1)
n--;
printeven(n);
}
