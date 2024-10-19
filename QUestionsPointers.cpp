#include<bits/stdc++.h>
using namespace std;
void second(int *p1,int *p2){
  p1=p2;
  *p1=2;
}
int main(){
  char c[]="GATE2024";
  char *p=c;
  cout<<p+p[3]-p[1];
  cout<<endl;
  //
  int i=0,j=1;
  second(&i,&j);
  cout<<i<<" "<<j;
  cout<<endl;
  //
  int *ptr;
  int x=0;
  ptr=&x;
  int y=*ptr;
  *ptr=1;
  cout<<x<<" "<<y;
  cout<<endl;
  //
  int a=5,b=10;
  int &name=a;
  int *ptrr=&a;
  (*ptrr)++;
  ptrr=&b;
  *ptrr=*ptrr+5;
  name+=5;
  cout<<a<<" "<<b<<endl;
  //
}