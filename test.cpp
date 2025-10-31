#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


int main(){
    int x;
    int *ptr; //ptr should be declared with special sign
    ptr = &x; // assignment of address of x to ptr
    *ptr = 10; //assignment of the value of (address of ptr or x)

    // printing value of x
    cout << x << endl; 
    cout << *ptr << endl;

    // printing address of x
    cout << &x << endl;
    cout << ptr << endl;

    //printing adress of pointer
    cout << &ptr << endl;
    return 0;
}



