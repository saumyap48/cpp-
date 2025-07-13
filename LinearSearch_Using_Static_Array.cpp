#include<bits/stdc++.h>
using namespace std;
int LineSearch(int arr[],int target){
  for(int i=0; i<10; i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}
int main(){
  int target=30;
  int arr[10]={1,5,6,10,20,15,50,40,70,30};

  //Simple hai, jab sirf ek hi jagah result chahiye.
  cout<<LineSearch(arr,target)<<endl;

  //or we can use to store then print it
  //Code readable hota hai.
  //Result ko aage bhi use kar sakte ho.
  int result = LineSearch(arr, target);
  cout << result << endl;
}
/*
Time Complexity:
Linear search me har element ko ek-ek karke check karte hain.

Best case: O(1) (agar target pehle hi mil jaye)
Worst/Average case: O(n) (agar target last me ho ya na ho)
Space Complexity:

O(1) (kyunki koi extra space nahi lagta, sirf ek-do variables hi use hote hain)
Summary:

Time Complexity: O(n)
Space Complexity: O(1)
*/
