#include<bits/stdc++.h>
using namespace std;
int longestsubs(vector<int>&s){
  int n=s.size();
  int l=0;
  int r=0;
  int maxlength=0;
  unordered_map<int,int>mp;
  while(r<n){
    mp[s[r]]++;
    while(mp.size()>2){
     mp[s[l]]--;
     if(mp[s[l]]==0){
      mp.erase(s[l]);
     }
     l++;
    }
      maxlength=max(maxlength,r-l+1);
     r++;
  }
    return maxlength;
}
int main(){
   int n;
   cin>>n;
   vector<int>s(n);
   for(int i=0; i<n; i++){
    cin>>s[i];
   }
   int longestSubstring=longestsubs(s);
  cout<<longestSubstring;
  return 0;
}

