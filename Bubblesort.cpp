 #include<bits/stdc++.h>
 using namespace std ;
 void Bubble_sort(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
 }
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    Bubble_sort(arr,n);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }

//The average and worst time complexity is O(N^2);
//Now assume a case when our array is already shorted we do not have to swap it 
//so the time complexity in the Best case is o(N);
#include<bits/stdc++.h>
 using namespace std ;
 void Bubble_sort(int arr[],int n){
    for(int i=n-1; i>=0; i--){
     int didswap=0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
     if(didswap==0){
      break;
     }
     cout<<"runs\n";
    }
 }
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    Bubble_sort(arr,n);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }







