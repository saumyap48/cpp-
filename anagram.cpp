#include<bits/stdc++.h>
using namespace std;
bool Isanagram(string s1,string s2){
  int n=s1.size();
  int m=s2.size();
  vector<int>freq(26,0);

  if(n!=m){
    return false;
  }
  for(int i=0; i<s1.length(); i++){
    freq[s1[i]-'a']++;
    freq[s2[i]-'a']--;
  }
  for(int i=0; i<26; i++){
  if(freq[i]!=0){
    return false;
  }
  }
  return true;
}
int main(){
  string s1,s2;
  cin>>s1>>s2;
  if(Isanagram(s1,s2)){
    cout<<"string is a anagram"<<endl;
  }
  else{
    cout<<"string is not an anagram"<<endl;
  }
}