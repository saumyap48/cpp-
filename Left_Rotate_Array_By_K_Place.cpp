#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>&arr,int start,int end){
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
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
int k;
cin>>k;
 k=k%n;
reverseArray(arr,0,k-1);
reverseArray(arr,k,n-1);
reverseArray(arr,0,n-1);
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
}
/*
Time Complexity:

O(n)
Each reverse operation takes O(m) time (where m is the number of elements being reversed), and you do three reversals that together cover all n elements. So, total time is O(n).
Space Complexity:

O(1)
The rotation is done in-place, using only a constant amount of extra space (for variables and swapping).

*/