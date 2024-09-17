#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target){
            return i;  // return index if target is found
    }
}
    return -1;  // return -1 if target is not found after checking all elements
}

int main() {
    int n;
    cin >> n;  // input number of elements
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // input array elements
    }
    int target;
    cin>>target;
    
    int val = linearSearch(arr, n, target);  // call linear search function
    
    cout << val;  // output result
}
