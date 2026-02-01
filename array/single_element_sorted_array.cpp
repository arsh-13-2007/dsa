#include<iostream> 
using namespace std ; 
int main (){
    int arr[] = { 3,3,7,7,10,11,11} ; 
    int length = sizeof(arr)/ sizeof(arr[0]) ; 
    cout<<"size of arr is :"<<length<<"\n"; 
    int start = 0 ;
    int end = length -1 ; 
    int count = end - start  ; 

    while ( start <= end ){
        int mid = start + ( end - start )/ 2; 


        if ( mid ==  0 && arr[0] !=arr[1]){
             cout<<"single element in array is:"<<arr[mid] ; 
            return 0 ; 
        }
        if ( mid == length - 1 && arr[length -1 ] != arr[length -2 ]){
            cout<<"single element in array is:"<<arr[mid] ; 
            return 0 ; 
        }
        if ( arr[mid] != arr[mid -1 ] && arr[mid] != arr[mid+1]){
            cout<<"single element in array is:"<<arr[mid] ; 
            return 0 ; 
        }
        if ( mid % 2 == 0 ){
            if ( arr[mid] == arr[mid-1]){
                end = mid - 1; 
            }
            else {
                start = mid + 1; 
            }
        }
        else {
            if ( arr[mid] == arr[mid-1]){
               start = mid + 1;  
            }
            else {
                end = mid - 1;
            }
        }
    }   
}