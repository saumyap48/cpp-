/*Array ka size (int arr[10])
compile time pe fix hai (static array).
Elements ko ek-ek karke check kiya ja raha hai (linear search).
Agar aap dynamic array (run time pe size decide karna)
use karna chahte hain, to aap vector<int> ka use kar sakte hain. Example:
*/
#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>&arr,int n,int target){
for(int i=0; i<n; i++){
    if(arr[i]==target){
      return i;
    }
}
return -1;
}
int main(){
cout<<"Enter the number of elements int the array:";
int n;
cin>>n;
vector<int>arr(n);
for(int i=0; i<n; i++){
  cin>>arr[i];
}
cout<<"Enter the value to search:";
int target;
cin>>target;
cout<<linearSearch(arr,n,target)<<endl;
}
/*
Time Complexity
Best case: O(1) (agar target pehle hi mil jaye)
Worst/Average case: O(n) (agar target last me ho ya na ho)
n = array ke elements ki sankhya
Space Complexity
O(n) (kyunki vector me n elements store ho rahe hain)
Extra space (function ke variables) = O(1)
Summary:

Time Complexity: O(n)
Space Complexity: O(n)
*/

/*
1.Static Array (int arr[10])
Jab array ka size fix ho aur pehle se pata ho.
Memory thodi kam lagti hai (stack pe allocate hota hai).
Size badal nahi sakta.
Fast access, lekin flexible nahi.
2. Dynamic Array (vector<int>)
Jab array ka size run-time pe decide ho ya badal sakta ho.
Memory heap pe allocate hoti hai (zyada flexible).
Size badha/sameta sakte hain.
Thoda zyada memory overhead ho sakta hai, lekin modern C++ me preferred hai.
Linear Search ke liye kaunsa better?
Agar size fix hai: Static array theek hai.
Agar size user input pe depend karta hai ya badal sakta hai: Dynamic array (vector<int>) better hai.
*/

