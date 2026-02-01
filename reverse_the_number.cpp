#include<iostream>
using namespace std; 

void reverse_num( int num){
    int rev = 0 ; 
    while(num!= 0 ){
        rev = ( rev*10 ) + num % 10 ; 
        num = num / 10 ; 
    }
    cout<<rev ; 
}
int main (){
    int num = 4537 ; 
    reverse_num(num) ; 
}