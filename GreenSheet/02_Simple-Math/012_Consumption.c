/*
https://judge.beecrowd.com/en/problems/view/1014
*/

#include <stdio.h>

int main(void)
{
    int x;
    float y;
    scanf("%d %f", &x, &y);

    printf("%.03f km/l\n", x/y);
    return 0;
}
