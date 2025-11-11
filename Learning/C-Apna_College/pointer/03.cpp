// https://youtu.be/irqbmMNs2Bo?t=21278
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


void swap(int a, int b);
void _swap(int* a, int *b);
int main() {
    int x = 3, y = 5;
    //call by value
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);
    //call by reference
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);
    return 0;
}

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

/*
void _swap(int*a, int* b) {
    int **t = &a; // this wont work as the value is changed by adress but not to a copy of the variable, so when the value is modified, it cant recall previous value & is updated to new.
    *a = *b;
    *b = **t;
}
*/
void _swap(int*a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
