// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


void pfib(int n ){
    int fib[n];
    fib[0]=0; printf("0\n");
    fib[1]=1; printf("1\n");

    for(int i=2; i<=n; i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\n", fib[i]);
    }

}


int main(){
    pfib(100);
    return 0;
}


