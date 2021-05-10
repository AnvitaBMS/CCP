#include <stdio.h>
int main()
{
 double a, b, product;
 printf("enter 2 floating point numbers; ");
 scanf("%lf %lf", &a, &b);
 product=a*b;
 printf("product=%lf", product);
 return (0);
}