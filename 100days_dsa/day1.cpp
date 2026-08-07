// Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

// // Input:
// // - First line: integer n
// // - Second line: n space-separated integers (the array)
// // - Third line: integer pos (1-based position)
// // - Fourth line: integer x (element to insert)

// // Output:
// // - Print the updated array (n+1 integers) in a single line, space-separated

// // Example:
// // Input:
// // 5
// // 1 2 4 5 6
// // 3
// // 3

// // Output:
// // 1 2 3 4 5 6

//  Explanation: Insert 3 at position 3, elements [4,5,6] shift right
 



#include<iostream> 
#include<vector> 
using namespace std; 


int main(){
   int n ; 
   cout<<"enter number of elements in array : " ; 
   cin>>n ; 


   vector<int>arr(n+1 ) ; 
   cout<<"enter values in array :" ; 
   for( int i = 1 ; i <= n ; i ++){
    cin>>arr[i] ; 
   }

   int pos ; 
   cout<<"enter position where u want to add number : " ; 
   cin>>pos ; 

   int num2 ; 
   cout<<"enter number : " ; 
   cin>>num2 ; 


   cout<<arr.size() ; 
   for( int i = n+1 ; i > pos ; i--){
    arr[i] = arr[i-1] ; 
   }

   arr[pos] = num2 ; 

   cout<<"updated array is :" ; 
   for( int i =1  ; i <= arr.size(); i++){
    cout<<arr[i]<<" " ; 
   } 

   cout<<endl<<arr.size()<<endl ; 

}