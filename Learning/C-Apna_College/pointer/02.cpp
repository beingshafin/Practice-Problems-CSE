// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


int main(){

    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    // value increment, without () *ptr++ will increment address.
    (*ptr)++;
    
    printf("%d\n", x);

    //address increment (1=4 bytes)
    ptr++;
    printf("%d\n", ptr);

    return 0;
}


