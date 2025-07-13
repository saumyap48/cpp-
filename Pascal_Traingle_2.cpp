#include<bits/stdc++.h>
using namespace std;
vector<long long>getRow(int r){
  int n=r-1;
  vector<long long>answer;
  long long num=1;
  for(int i=0; i<=n; i++){
    answer.push_back(num);
    num=num*(n-i)/(i+1);
  }
  return answer;
}
int main() {
    int r;
    cout << "Enter row number (1-indexed): ";
    cin >> r;

    vector<long long> result = getRow(r);

    cout << "Row " << r << " of Pascal's Triangle: ";
    for (long long val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
/*
Time Complexity:

O(r)
The loop runs r times to compute each element of the row.
Space Complexity:

O(r)
You store r elements in the answer vector.
Summary:

Time Complexity: O(r)
Space Complexity: O(r)
*/
