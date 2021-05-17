//c program to convert fahrenheit to celsius
#include <stdio.h>
int main()
{
 float celsius, fahrenheit;
 clrscr();
 printf("enter the temperature in fahrenheit: \n");
 scanf("%f", &fahrenheit);
 celsius = 5 * (fahrenheit - 32) / 9;
 printf("\n %.2f fahrenheit = %.2f celsius", fahrenheit, celsius);
 return(0);
}