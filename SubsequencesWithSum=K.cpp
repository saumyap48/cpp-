#include <bits/stdc++.h>
using namespace std;

int printS(int index, int s, int sum, vector<int>& arr, int n) {
    // If the sum exceeds target, stop further recursion.
    if (s > sum) return 0;

    // Base case: when we reach the end of the array.
    if (index == n) {
        return (s == sum) ? 1 : 0;
    }

    // Include the current element in the sum.
    s += arr[index];
    int left = printS(index + 1, s, sum, arr, n);

    // Backtrack: exclude the current element and call recursively.
    s -= arr[index];
    int right = printS(index + 1, s, sum, arr, n);

    // Return the total count of valid subsequences.
    return left + right;
}

int main() {
    int n;
    cin >> n;  // Input the size of the array.
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements.
    }

    int sum;
    cin >> sum;  // Input the target sum.

    // Call the function and print the result.
    int result = printS(0, 0, sum, arr, n);
    cout << result << endl;

    return 0;
}
