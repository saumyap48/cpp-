#include<bits/stdc++.h>
using namespace std;
vector<int>spiralPrint(vector<vector<int>>&matrix,int row,int col){
  vector<int>answer;
  int StartRow=0, EndRow=row-1, StartCol=0,EndCol=col-1;
  while(StartRow<=EndRow && StartCol<=EndCol){
    //Top Row
    for(int i=StartCol; i<=EndCol; i++){
      answer.push_back(matrix[StartRow][i]);
    }
    StartRow++;
    //Right Column
    for(int i=StartRow; i<=EndRow; i++){
      answer.push_back(matrix[i][EndCol]);
    }
    EndCol--;
    //Bottom Row;
    if(StartRow<=EndRow){
    for(int i=EndCol; i>=StartCol; i--){
        answer.push_back(matrix[EndRow][i]);
      } 
       EndRow--;
    }
      //LeftColumn
        if(StartCol<=EndCol){
      for(int i=EndRow; i>=StartRow; i--){
          answer.push_back(matrix[i][StartCol]);
      }
      StartCol++;
    }
  }
  return answer;
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
vector<int>spiral=spiralPrint(matrix,row,col);
for(int val: spiral){
  cout<<val<<" ";
}
}
/*
Time Complexity:

O(n × m)
You visit every element of the matrix exactly once, 
where n is the number of rows and m is the number of columns.
Space Complexity:

O(n × m)
You store all elements in the answer vector to
 return the spiral order.
Summary:

Time Complexity: O(n × m)
Space Complexity: O(n × m)
*/