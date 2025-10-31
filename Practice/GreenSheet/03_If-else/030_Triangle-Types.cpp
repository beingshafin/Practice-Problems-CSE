// https://judge.beecrowd.com/en/problems/view/1045

#include <iostream>
using namespace std;

int main(){ 
    double a,b,c,x;    
    cin >> a >> b >> c;   

    if (a<b) {x=a; a=b; b=x;}
    if (a<c) {x=a; a=c; c=x;}
    if (b<c) {x=b; b=c; c=x;}

    if (a >= b+c) cout << "NAO FORMA TRIANGULO\n";
    else if (a*a == b*b+c*c) cout << "TRIANGULO RETANGULO\n";
    else if (a*a > b*b+c*c) cout << "TRIANGULO OBTUSANGULO\n";
    else if (a*a < b*b+c*c) cout << "TRIANGULO ACUTANGULO\n";

    if (a==b && b==c) cout << "TRIANGULO EQUILATERO\n";
    else if (a==b || b==c || a==c) cout << "TRIANGULO ISOSCELES\n";

    
    return 0;
}
