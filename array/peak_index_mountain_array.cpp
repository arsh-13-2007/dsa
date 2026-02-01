#include<iostream>
using namespace std ; 
int main(){
    int arr[] = {1, , 7, 10, 15, 3} ; 
    int length = sizeof(arr) / sizeof(arr[0]) ; 



    /*        brute force technique               time complexity is : O(n)   */
    // int peak = 0  ; 
    // for ( int i = 1 ; i <(length -1) ; i++ ){
    //     if ( arr[i] >= arr[i-1] && arr[i] > arr[i+1]){
    //         peak = i ; 
    //     }
    // }
    // if ( arr[peak] <= arr[(length -1)] ){
    //     peak = length -1 ; 
    // }

    // cout<<"peak element form this array is : " <<arr[peak] ;
    
    
    /*  using binary search approach               time complexity : O(log(n))   */

   int start = 1;
int end = length - 2;

if (length < 3) {
    cout << "Peak not possible";
    return 0;
}

while (start <= end) {
    int peak = start + (end - start) / 2;

    if (arr[peak] > arr[peak - 1] && arr[peak] > arr[peak + 1]) {
        cout << "Peak element found at index: " << peak;
        return 0;
    }

    if (arr[peak] < arr[peak + 1]) {
        start = peak + 1;
    } else {
        end = peak - 1;
    }
}

}