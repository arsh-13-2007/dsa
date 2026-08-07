// Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer pos (1-based position to delete)

// Output:
// - Print the updated array with (n-1) elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 10 30 40 50

// Explanation: Delete position 2 (element 20), remaining elements shift left

#include<iostream> 
#include<vector>
using namespace std ; 
int main(){
    int n ; 
   cout<<"enter number of elements in array : " ; 
   cin>>n ; 


   vector<int>arr(n ) ; 
   cout<<"enter values in array :" ; 
   for( int i = 1 ; i <= n ; i ++){
    cin>>arr[i] ; 
   }

   int pos ; 
   cout<<"enter position where u want to delete elements : "; 
   cin>>pos;
   
   for( int i = pos ; i < arr.size() ; i ++){
        arr[i] = arr[i+1 ] ; 
   }

   
   cout<<"updated array is :" ; 
   for( int i =1  ; i <= arr.size(); i++){
    cout<<arr[i]<<" " ; 
   } 

   cout<<endl<<arr.size()<<endl ; 


}