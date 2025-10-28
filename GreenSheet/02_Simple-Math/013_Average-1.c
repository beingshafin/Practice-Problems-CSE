/*
https://judge.beecrowd.com/en/problems/view/1005
*/

#include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    // avg of both means (v1*w1 + v2*w2)/ total w
    // normally weight would be 1 so that would be (v1*1+v2*1)/2  
    // but in this case a weight is given for both.
    printf("MEDIA = %.5f\n", (a*3.5+b*7.5)/11 );
    return 0;
}
