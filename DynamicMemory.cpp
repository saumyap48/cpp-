#include<bits/stdc++.h>
using namespace std;
int main(){
  //allocating heap memory for variable
  int *ptr=new int;
  *ptr=5;  //value assign
  cout<<*ptr<<endl;

  float *ptr2=new float;
  *ptr2=3.6;
  cout<<*ptr2<<endl;
  int n;
  cout<<"Enter the size of array :";
  cin>>n;
  int *p=new int[n];

  for(int i=0; i<n; i++){
    p[i]=i+1;
  }

  for(int i=0; i<n; i++){
    cout<<p[i]<<" ";
  }

  // delete keyword use
  delete ptr;
  delete ptr2;
  delete[]p;
}