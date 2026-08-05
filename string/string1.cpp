// #include<iostream>
// using namespace std ; 
// int main(){
//     // char str[100] ;
//     char str1[100] ;
//     // cout<<"enter first string in character array:" ; 
//     // cin>>str ;  // drawback : not able to take sentence as intput 


//     // so for string input we use (cin.getline) function  


//     cout<<"\nenter second string :";
//     cin.getline(str1 , 100  ) ; 

//     cout<<str1 ; 


// }


// #include<iostream>
// #include<str
// using namespace std;

// int main(){
//     char str[100];

//     cout << "\nenter second string :";
//     cin.getline(str, 100 );
//     int length = 0 ; 
//     // how to find length of the any string 
//     for ( int i = 0 ; i < str[i] != '\0' ; i++ ){
//         length ++ ; 
//     }
//     cout<<"length of this string is :"<<length<<endl ; 
// }'


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str; // string is dynamic in nature 

    cout << "\nenter second string :";
    getline(cin, str );
    
    for ( int i = 0 ; i < str.length() ; i++ ){
        cout<<str[i]<<" " ; 
    }
    cout<<endl<<str.length()<<endl ; 
    
}
