/*
https://judge.beecrowd.com/en/problems/view/1048
*/

#include <stdio.h>
 
int main() {
 
    double s, n, p, i;
        
    scanf("%lf", &s);
    if(s>=0 && s<=400) p=15;
    else if(s>400 && s<=800) p=12;
    else if(s>800 && s<=1200) p=10;
    else if(s>1200 && s<=2000) p=7;
    else if(s>2000) p=4;
    
    i=s*p/100;
    n=s+i;
    
    printf("Novo salario: %0.2lf\n", n);
    printf("Reajuste ganho: %0.2lf\n", i);
    printf("Em percentual: %.0lf %\n", p);
    
    
    
 
    return 0;
}