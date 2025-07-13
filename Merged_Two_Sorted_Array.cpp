#include<bits/stdc++.h>
using namespace std;
void mergeArrays(vector<int>&arr1, int m,vector<int>&arr2,int n){
  vector<int>merged(m+n);
  int left=0;
  int right=0;
  int index=0;
  while(left<m && right<n){
    if(arr1[left]<=arr2[right]){
      merged[index]=arr1[left];
      index++;
      left++;
    }
    else{
      merged[index]=arr2[right];
      index++;
      right++;
    }
  }
  while(left<m){
    merged[index]=arr1[left];
    index++;
    left++;
  }
  while(right<n){
    merged[index]=arr2[right];
    index++;
    right++;
  }
  for(int i=0; i<m+n; i++){
    arr1[i]=merged[i];
  }
}
int main() {
    int m, n;

    cout << "Enter number of elements in nums1 (excluding 0s): ";
    cin >> m;

    cout << "Enter number of elements in nums2: ";
    cin >> n;

    vector<int> nums1(m + n); // Extra space for nums2 elements
    vector<int> nums2(n);

    cout << "Enter " << m << " sorted elements of nums1:\n";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    // Fill remaining part of nums1 with dummy values (not used)
    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }

    cout << "Enter " << n << " sorted elements of nums2:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    // Call merge function
    mergeArrays(nums1, m, nums2, n);

    // Print result
    cout << "Merged array:\n";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
Time Complexity:

O(m + n)
You traverse both arrays once to merge them.
Space Complexity:

O(m + n)
You use an extra vector merged of size m + n.
Summary:

Time Complexity: O(m + n)
Space Complexity: O(m + n)
*/


