/*
https://judge.beecrowd.com/en/problems/view/1044
*/

#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%s\n", (x%y==0 || y%x==0) ? "Sao Multiplos" : "Nao sao Multiplos");

    return 0;
}
