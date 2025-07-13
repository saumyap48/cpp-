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
  int j=0;
  for(int i=0; i<n; i++){
    if(arr[i]!=0){
      swap(arr[i],arr[j]);
      j++;
    }

  }
  cout<<"Array after moving zeros to the end:";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
/*
In interviews, space complexity 
usually refers to the extra
(auxiliary) space your algorithm uses, 
not the space used for input storage
 (like the array/vector itself).
*/



/*
Time Complexity:

O(n)
You iterate through the array once, and each swap is O(1).
Space Complexity:

O(1)
You use only a constant amount of extra space (just the variable j), and the operation is done in-place.
Summary:

Time Complexity: O(n)
Space Complexity: O(1)

*/
