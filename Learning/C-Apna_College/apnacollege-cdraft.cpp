// #include <iostream> 
// #include <math.h>
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


float square(float side);
float areaC(float rad);
float areaR(float x,float y);
void printHW(int count);
int sum(int n);
int facto(int n);
float ctof(float c);
int fib(int n);

int main(){

    cout << fib(6) << endl;
    // cout << ctof(37) << endl;


    // cout << sum(50) << endl;
    // cout << facto(10) << endl;

    // printHW(5);
    // cout << square(4) ;
    // cout << "\n";
    // cout << areaC(6);
    // cout << endl;
    // cout << areaR(4, 3) << endl;
}


float ctof(float c){
    float f = (c*9/5)+32;
    return f;
}

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fib= fibnm1 + fibnm2;
    return fib;
}



















// calculate sum

int sum(int n){
    if(n==1) return 1;
    int sumNm1= sum(n-1);
    int sum= sumNm1 + n;
    // int sum= sum(n-1) + n;
    return sum;
}



// recursion


int facto(int n){
    if(n == 1) return 1;
    int x = facto(n-1);
    int facto= n*x;
    return facto;
}






void printHW(int count){
    if (count<=0) return;
    cout << "Hello Motherfuckers\n";
    //count--;
    printHW(count-1);
}



float square(float side){
    return side*side;
}

float areaC(float rad){
    return M_PI*pow(rad,2);
}

float areaR(float x,float y){
    cout << "wtf \n";
    return x*y;
}


