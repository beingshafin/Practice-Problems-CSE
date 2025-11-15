// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

//*arr or arr[][] only works for 1d array (can ignore first one but not other dimensions) 

void storetable(int arr[][10], int n, int m, int num){
    
    for(int i=0; i<m; i++){
        arr[n][i]= num*(i+1);
    }
}

// store the multiplication table of 2 and 3 to 10
int main(){

    int table[2][10];

    storetable(table, 0, 10, 2);
    storetable(table, 1, 10, 3);

    for(int i=0; i<2; i++){
        for(int j=0; j<10; j++) cout<<table[i][j]<<endl ;
    }


    return 0;
}


