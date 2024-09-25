#include<bits/stdc++.h>
using namespace std;
bool Isisomorphic(string s1,string s2){
  int n=s1.size();
  int m=s2.size();
  vector<int>v1(128,-1);
  vector<int>v2(128,-1);

  if(n!=m){
    return false;
  }
  for(int i=0; i<n; i++){
    if(v1[s1[i]]!=v2[s2[i]]){
      return false;
    }
    v1[s1[i]]=i;
    v2[s2[i]]=i;
  }
  return true;
}
int main(){
  string s1,s2;
  cin>>s1>>s2;
  if(Isisomorphic(s1,s2)){
    cout<<"string is isomorphic"<<endl;
  }
  else{
    cout<<"string is not isomorphic"<<endl;
  }
}