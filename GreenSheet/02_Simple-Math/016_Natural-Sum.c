/*
https://judge.beecrowd.com/en/problems/view/1805
*/

#include <stdio.h>

int main(void)
{
    long long int a, z, s=0;

    scanf("%lld %lld", &a, &z);

    while (a<=z)
    {
        s = s + a;
        a++;

    }
    
    printf("%lld\n", s);




    return 0;
}
