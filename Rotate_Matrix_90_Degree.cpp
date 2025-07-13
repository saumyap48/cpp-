#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>RotateMatrix(vector<vector<int>>matrix,int row,int col){
    int n=matrix.size();
    for(int i=0; i<n; i++){
      for(int j=0; j<i; j++){
        swap(matrix[i][j],matrix[j][i]);
      }
    }   
    for(int i=0; i<n; i++){
      reverse(matrix[i].begin(),matrix[i].end());
    } 
    return matrix;
}
int main(){
int row;
cout<<"Enter the number of rows int the matrix: ";
cin>>row;
int col;
cout<<"Enter the number of columns in the matrix: ";
cin>>col;
vector<vector<int>>matrix(row,vector<int>(col));
cout<<"Enter the elements of the vector: ";
for(int i=0; i<row; i++){
  for(int j=0; j<col; j++){
    cin>>matrix[i][j];
  }
}
vector<vector<int>>answer=RotateMatrix(matrix,row,col);
cout<<"Rotated matrix: ";
for(int i=0; i<row; i++){
  for(int j=0; j<col; j++){
    cout<<answer[i][j]<<" "; 
}
cout<<endl;
}
}
/*
Time Complexity:

O(n²)
Transposing the matrix: O(n²)
Reversing each row: O(n²)
Total: O(n²)
Space Complexity:

O(1) (if done in-place)
Your function modifies the matrix in-place
 (except for the function parameter copy), 
 so no extra space is used except for a few variables.
If you consider the returned matrix as a new copy,
 then space is O(n²).
Summary:

Time Complexity: O(n²)
Space Complexity: O(1) (in-place), O(n²)
 (if returning a new matrix)
*/