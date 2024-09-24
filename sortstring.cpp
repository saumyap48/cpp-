#include<bits/stdc++.h>
using namespace std;
string countsort(string str){
    vector<int> fre(26,0);
    for(int i=0; i<str.length(); i++){
        int index=str[i]-'a';
        fre[index]++;
    }
    int j=0;
    for(int i=0; i<26; i++){
        while(fre[i]--){
            str[j]=i+'a';
            j++;
        }
    }
    return str;
}

int main(){
    string str;
    cin>>str;
    cout<<countsort(str)<<endl;
}