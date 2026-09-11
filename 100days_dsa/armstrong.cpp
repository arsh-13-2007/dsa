#include<iostream> 
using namespace std ; 
void armstrong_check(int n ){
    int num1 = n ; 
    int arm= 0 ; 
    int sum = 0  ; 
    while( n > 0 ){
        arm = n % 10  ; 
        sum = sum + arm*arm*arm ; 
        n = n / 10 ; 
    }
    if( sum == num1){
        cout<<"true" ;
        return ; 
    }
    else {
        cout<<"false" ;
        return ; 
    }
} 
int main () {
    int n ; 
    cout<<"enter number : " ; 
    cin>> n ; 
    // check number is armstrong or not
    armstrong_check( n ) ;  
}