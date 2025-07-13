#include<bits/stdc++.h>
using namespace std;
vector<int>FindRepeatingAndMissingNumber(vector<int>&arr,int n){
        unordered_map<int,int>freq;
        for(int i=0; i<n; i++){
          freq[arr[i]]++;
        }
        int Repeating=-1,missing=-1;
        for(int i=1; i<=n; i++){
          if(freq[i]==2){
            Repeating=i;
          }
          else if(freq[i]==0){
            missing=i;
          }
          }
          return {Repeating,missing};
        }

  int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
  vector<int>answer=FindRepeatingAndMissingNumber(arr,n);
  cout<<"Repeating Number: "<<answer[0]<<endl;
  cout<<"Missing Number: "<<answer[1]<<endl;
}
/*
Time Complexity:

O(n)
You traverse the array once to build 
the frequency map.
You traverse from 1 to n once to find
 the repeating and missing numbers.
Space Complexity:

O(n)
The unordered_map can store up to n elements in 
the worst case.
Summary:

Time Complexity: O(n)
Space Complexity: O(n)

*/