#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="malyalam";
  int start=0, end=s.size()-1;
  while(start<end)
  {
    if(s[start]!=s[end])
    {
      cout<<"Not a palidrome";
      return 0;
    }
    start++,end--;
  }
  cout<<"It Is a palidrome";
}