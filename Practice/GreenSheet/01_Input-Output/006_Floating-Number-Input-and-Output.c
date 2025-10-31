/*
https://judge.beecrowd.com/en/problems/view/2758
*/

#include <stdio.h>

int main()
{
  float x,y;
  double a,b;
  scanf("%f %f", &x, &y);
  scanf("%lf %lf", &a, &b);

  printf("A = %f, B = %f\n", x,y);
  printf("C = %lf, D = %lf\n", a,b);
  
  printf("A = %.1f, B = %.1f\n", x,y);
  printf("C = %.1lf, D = %.1lf\n", a,b);

  printf("A = %.2f, B = %.2f\n", x,y);
  printf("C = %.2lf, D = %.2lf\n", a,b);

  printf("A = %.3f, B = %.3f\n", x,y);
  printf("C = %.3lf, D = %.3lf\n", a,b);

  printf("A = %.3E, B = %.3E\n", x,y);
  printf("C = %.3E, D = %.3E\n", a,b);
  
  printf("A = %.0f, B = %.0f\n", x,y);
  printf("C = %.0lf, D = %.0lf\n", a,b);

  return 0;
}