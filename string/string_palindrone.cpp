#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s ){
    int start = 0 ; 
    int end = s.lenght - 1 ; 
    while(start <= end ){
        if ( isAlphaNum(s[start])){
            start ++ ; 
            continue;
        }
        if ( isAlphaNum(s[end])){
            end-- ; 
            continue;
        }
        if (tolower(s[start])!=tolower(s[end])){
            return false ; 
        }
    }
    start ++ ; end -- ; 
    return true ; 
}
int main (){
    string str = "aaaarraaa";
    // string str1 = str ; 
    // reverse(str.begin(), str.end());  
    // if ( str == str1){
    //     cout<<"true" ; 
    // }
    // else {
    //     cout<<" false" ; 
    // }
    
}  