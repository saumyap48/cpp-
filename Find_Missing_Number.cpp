#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter the number of elements in the array:";
  int n;
  cin>>n;
  vector<int>arr(n-1);
  for(int i=0; i<n-1; i++){
    cout<<"Enter elemnt"<<" "<<i+1<<":";
    cin>>arr[i];
  }
  int totalsum=(n*(n+1))/2;
  int arrsum=0;
  for(int val: arr){
    arrsum+=val;
  }
  int missingnumber=totalsum-arrsum;
  cout<<"The missing number is:"<<" "<<missingnumber<<endl;
}
//isko frequency count krke bhi kr skte hain
/*
Time Complexity:

O(n)
Calculating the sum of the array takes O(n)
 time (since the array has n-1 elements, it's still O(n)).
 
Space Complexity:
Auxiliary space complexity: O(1)
Total space complexity (including input): O(n)
In interviews, mention both if you want to be clear!
But if they ask for "space complexity" 
and mean extra space, your answer is O(1).
*/