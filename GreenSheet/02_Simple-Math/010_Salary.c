/*
https://judge.beecrowd.com/en/problems/view/1008
*/

#include <stdio.h>

int main(void)
{ 
    int no, hour;
    double salary, rate;

    scanf("%d %d %lf", &no, &hour, &rate);

    salary = rate*hour;
    printf("NUMBER = %d\n", no);
    printf("SALARY = U$ %0.2lf\n", salary);

    return 0;
}
