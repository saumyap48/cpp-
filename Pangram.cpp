#include<bits/stdc++.h>
using namespace std;
bool Ispangram(string &sentence){
     if(sentence.size()<26){
     return false;
     }
     vector<bool>alpha(26,0);
     for(int i=0; i<26; i++){
      alpha[sentence[i]-'a']=1;
     }

     for(int i=0; i<26; i++){
      if(alpha[i]==0){
        return false;
      }
      return true;
     }
}
int main(){
  string sentence;
  cin>>sentence;
  if(Ispangram(sentence)){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  
}