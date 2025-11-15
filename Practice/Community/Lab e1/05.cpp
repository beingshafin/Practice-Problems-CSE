// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double c_rad = c*M_PI/180.0;
    double s = 0.5*a*b*sin(c_rad);

    double side = sqrt(a*a + b*b - 2.0*a*b*cos(c_rad));


    double l = a+b+side;

    double h = (2.0*s)/a;

    printf("%.8f\n", s);
    printf("%.8f\n", l);
    printf("%.8f\n", h);

    return 0;
}