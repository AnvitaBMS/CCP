#include <stdio.h>
int main()
{
 float a, b, product;
 printf("enter 2 floating point numbers: ");
 scanf("%f %f", &a, &b);
 product=a * b;
 printf("product of the given numbers is:%.2f", product);
 return (0);
}