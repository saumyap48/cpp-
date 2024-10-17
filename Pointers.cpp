#include<bits/stdc++.h>
using namespace std;
int main(){
  int a=10;
  cout<<&a<<endl;
  int *ptr=&a;
  cout<<sizeof(ptr)<<endl;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  int b=20;
  ptr=&b;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  b=30;
  cout<<*ptr<<endl;
}