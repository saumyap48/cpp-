#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
int Largest=INT_MIN;
int SecondLargest=INT_MIN;
for(int i=0; i<n; i++){
  if(arr[i]>Largest){
   SecondLargest=Largest;
   Largest=arr[i];
  }
  else if(arr[i]>SecondLargest && arr[i]<Largest){
    SecondLargest=arr[i];
  }
}
  if(SecondLargest==INT_MIN){
    cout<<"No second largest element found."<<endl;
  }
  else{
    cout<<SecondLargest<<endl;
  }

}
/*
Time Complexity:

O(n)
You iterate through the array once to find the largest and second largest elements.
Space Complexity:

O(n)
You use a vector to store all n elements of the array. No significant extra space is used beyond that.
Summary:

Time Complexity: O(n)
Space Complexity: O(n)

*/
  