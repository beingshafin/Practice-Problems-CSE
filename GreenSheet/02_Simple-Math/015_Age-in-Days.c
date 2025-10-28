/*
https://judge.beecrowd.com/en/problems/view/1020
*/

#include <stdio.h>

int main(void)
{ 
    int dd,y,m,d;
    scanf("%d", &dd);

    y = dd/365;
    m = (dd%365)/30;
    // m = (dd- y*365)/30;
    d = dd - (y*365 + m*30);
    

    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);
    

    return 0;
}
