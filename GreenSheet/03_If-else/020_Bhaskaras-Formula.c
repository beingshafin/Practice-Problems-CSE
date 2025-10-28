/*
https://judge.beecrowd.com/en/problems/view/1036
*/

#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, x1, x2, r;
    scanf("%lf %lf %lf", &a,&b,&c);
    
    r = b*b - 4*a*c;
    x1 = (-b + sqrt(r))/(2*a);
    x2 = (-b - sqrt(r))/(2*a);
    
    if (a != 0 && r >= 0){
    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);
    }
    else printf("Impossivel calcular\n");
 
    return 0;
}
