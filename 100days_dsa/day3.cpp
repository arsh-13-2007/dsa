// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

// Input:
// - First line: integer n (array size)
// - Second line: n space-separated integers
// - Third line: integer k (key to search)

// Output:
// - Line 1: "Found at index i" OR "Not Found"
// Line 2: "Comparisons = c"

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// Found at index 2
// Comparisons = 3

// Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)


#include<iostream> 
#include<vector> 
using namespace std ; 
int main(){
    int n ;
    cout<<"enter number of elements in array : " ; 
    cin>>n ; 
    int camparison = 0 ; 


   vector<int>arr(n) ; 
   cout<<"enter values in array :" ; 
   for( int i = 0 ; i < n ; i ++){
    cin>>arr[i] ; 
   }

   int k ; 
   cout<<"enter element u want to search : "; 
   cin>>k;
   for(int i = 0 ; i< arr.size() ; i++){
    if(k == arr[i]){
        cout<<"Found at index "<<i<<endl ; 
        cout<<"Comparisons = "<<(camparison+1 )<<endl ; 
        return  0 ; 
    }
    camparison++ ; 
   }

  

}
