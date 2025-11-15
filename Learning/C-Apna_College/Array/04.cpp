// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


void reverse(int ar[], int size){
    for(int i=0; i<size/2; i++){
        int temp = ar[i];

        // placing last value on first
        ar[i] = ar[size-i-1];

        // placing first value on last
        ar[size-i-1] = temp;
    }

}  

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr, 10);
    for(int i=0; i<10; i++) printf("%d ", arr[i]);
    return 0;
}


