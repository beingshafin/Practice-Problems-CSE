/*
https://judge.beecrowd.com/en/problems/view/1010
*/

#include <stdio.h>

int main(void)
{
    int c1, u1, c2, u2;
    float p1, p2;

    scanf("%d %d %f", &c1, &u1, &p1);
    scanf("%d %d %f", &c2, &u2, &p2);

    float price= u1*p1 + u2*p2;
    printf("VALOR A PAGAR: R$ %0.2f\n", price);


    return 0;
}
