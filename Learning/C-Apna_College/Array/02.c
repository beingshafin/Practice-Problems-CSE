// Code Snippet 
#include <stdio.h>


int main(){
    int arr[5], *p;
    
    // input
    p = arr; // arr is a pointer with address of first element &arr[0]

    // but while calling it as anargument in another function must use *arr in decalration of function or arr[0]/arr[]

    for(int i=0; i<5; i++){
        scanf("%d", arr+i);
    }

    // output
    for(int i=0; i<5; i++){
        printf("%d ", *(arr+i));
    }

    return 0;
}


