#include<bits/stdc++.h>
using namespace std;
long long nCr(int r,int c){
  if(c>r) return 0; 
  long long num=1;
  for(int i=0; i<c; i++){
    num*=(r-i);
    num/=(i+1);
  }
  return num;
}
int main() {
    int r, c;
    cout << "Enter row (1-indexed): ";
    cin >> r;
    cout << "Enter column (1-indexed): ";
    cin >> c;

    // C(r-1, c-1)
    long long result = nCr(r - 1, c - 1);
    cout << "Value at (" << r << ", " << c << ") in Pascal's Triangle is: " << result << endl;

    return 0;
}
/*
Time Complexity:

O(c)
The loop runs c times (where c is the column index).
Space Complexity:

O(1)
Only a constant amount of extra space is used
 (just a few variables).
 
Summary:

Time Complexity: O(c)
Space Complexity: O(1)

*/