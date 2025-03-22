#include <stdio.h>
int main (){
    int size = 0 ; 
    int n ; 
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n] ;
    printf("enter the elements of the arrays : ") ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]) ; 
        size ++ ;
    }
    printf("size of old array : %d\n", size);
    printf("old array : ") ;
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ", arr[i]) ;
    }
    printf("\n") ;
    int index ; 
    printf("enter index of delete :\n");
    scanf("%d",&index);
    for ( int i = index  ; i <= size -1  ; i++){
        arr[i] = arr[i+1] ;

    }
    size -- ; 
    printf("size of new array : %d\n", size);
    printf("new array : ") ;
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ", arr[i]) ;
        }
        return 0 ;


}