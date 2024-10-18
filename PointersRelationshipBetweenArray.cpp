#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[5]={1,2,3,4,5};
  int *ptr=arr;
  //print the address of first element or 0 index
  cout<<arr<<endl;
  cout<<arr+0<<endl;
  cout<<&arr[0]<<endl;
  cout<<ptr<<endl;
  //print the address of second element or 1 index
  cout<<arr+1<<endl;
  cout<<&arr[1]<<endl;
  //print the value of 0 index
  cout<<arr[0]<<endl;
  cout<<*arr<<endl;
  cout<<*(arr+0)<<endl;
  
  //print all the address
  for(int i=0; i<5; i++){
    cout<<arr+i<<endl;
  }
  
  //print all the value
  for(int i=0; i<5; i++){
    cout<<*(arr+i)<<" ";
  }
  cout<<endl;
  //print all the value
  for(int i=0; i<5; i++){
    cout<<ptr[i]<<" ";
  }
  cout<<endl;
  for(int i=0; i<5; i++){
    cout<<ptr+i<<endl;
  }
  cout<<endl;
    for(int i=0; i<5; i++){
    cout<<*ptr<<" ";
    ptr++;
  }
}
//ptr=ptr+2; yes it is possible 
//arr=arr+2; not possible to do such type of operation