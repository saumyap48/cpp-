#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element in the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
   unordered_set<int> s(arr.begin(), arr.end());
     //must remember to iterate over the set not the original
     // array which may have duplicates elements
     vector<int>UniqueElements;
     for(auto it=s.begin(); it!=s.end(); it++){
        UniqueElements.push_back(*it);
     }
  int longestStreak=1;
  for(int i=0; i<n; i++){
      int num=UniqueElements[i];
    if(s.find(num-1)==s.end()){
      int currentNum=num;
      int currentStreak=1;
     while(s.find(currentNum+1)!=s.end()){
        currentNum++;
        currentStreak++;
     }
     longestStreak=max(longestStreak,currentStreak);
    }
  }
  cout<<"The length of the longest consecutive sequence is: ";
    cout<<longestStreak<<endl;
}
/*
Time Complexity:

Inserting all elements into the unordered_set takes O(n) time.
For each element, you only start a sequence
if it is the beginning (i.e., arr[i] - 1 is not present).
Each element is part of only one sequence, 
so the inner while loop runs at most n times in total.
Therefore, the overall time complexity is O(n).
Space Complexity:

You use an unordered_set to store all unique elements,
which takes O(n) extra space.
Summary:

Time Complexity: O(n)
Space Complexity: O(n)

*/