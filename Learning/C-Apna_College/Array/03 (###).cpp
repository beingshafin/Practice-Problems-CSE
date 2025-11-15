// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

// array is declared as a pointer like arr[] or *arr (existing)
// but while using *arr or arr[0] indicates the value of the pa
void printArray(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i]%2 == 0) count++;
    }
    printf("%d\n", count);
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    *arr = 10;  

// array is used as a pointer/address like &arr[0] or arr
    printArray(&arr[0], 10);

    printf("%d\n", *arr);

    return 0;
}


// declaration (normal)
// *ptr is pointer to address (stores address not values)

// declaration (array) always calls by reference/address.
// arr[], *arr is special pointer (which can store values directly for any not given address (automatic memory allocation)/given(dynamic link) (if applicable like function recall argument) )

// using
// *arr or arr[0] is value of the first element
// arr or &arr[0] is address of the first element

