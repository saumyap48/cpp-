#include<bits/stdc++.h>
using namespace std;
void func(int *p){
  *p=*p+10;
}
void fun(int *p4){
  p4++;
}
int main(){
  int n=10;
  int *p=&n;  //Single pointer
  int **p2=&p; //Double pointer
  int ***p3=&p2; //Triple Pointer
  cout<<p<<endl;
  fun(p);
  cout<<p<<endl;
  func(p);
  cout<<n<<endl;
  cout<<&p<<endl;
  cout<<p2<<endl;
  cout<<&p2<<endl;
  cout<<p3<<endl;

  //VAlue ko modify karna ho,jo n mein rakhi hai..
  *p=*p+5;
  cout<<n<<endl;
  **p2=**p2+5;
  cout<<n<<endl;
  ***p3=***p3+5;
  cout<<n<<endl;

}