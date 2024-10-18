#include<bits/stdc++.h>
using namespace std;
void swapping(int *p1,int *p2){
  int temp=*p1;
  *p1=*p2;
  *p2=temp;
  cout<<&p1<<endl;
  cout<<&p2<<endl;
}
void doub(int *p){
  for(int i=0; i<5; i++){
    p[i]=2*p[i];
  }
}
void incr(int *ptr){
  *ptr=*ptr+1;
}
int main(){
  int num=10;
  int temp=num;
  incr(&num);
  cout<<num<<endl;
  int arr[5]={1,2,3,4,5};
  doub(arr);
  for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int first=10;
  int second=20;
  swapping(&first,&second);
  cout<<first<<endl<<second<<endl;
}