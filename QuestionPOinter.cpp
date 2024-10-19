#include<bits/stdc++.h>
using namespace std;
void summmm(char *str1,char *str2){
  while((*str1=*str2)){
    str1++;
    str2++;
  }
}
int summ(int x,int *py,int**ppz){
  int y ,z;
  **ppz+=1; 
  z=**ppz;
  *py+=2;
  y=*py;
  x+=3;
  cout<<x+y+z<<endl;

}
int main(){
  int c,*b,**a;
  c=4, b=&c ,a=&b;
  cout<<summ(c,b,a);
  cout<<endl;
  //
  char first[]="Mohan";
  char second[]="Rohan";
  summmm(first,second);
  cout<<first;
}
