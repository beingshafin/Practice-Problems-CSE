/*
https://judge.beecrowd.com/en/problems/view/2456
*/

//#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a<b && b<c && c<d && d<e) printf("C\n");
    else if(a>b && b>c && c>d && d>e) printf("D\n");
    else cout << "N\n";
    printf("cdi\n");

    return 0;
}
