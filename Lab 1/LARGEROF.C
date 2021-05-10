#include <stdio.h>
void main()
{
 int a,b;
 printf("input the values for number1 and number2: ");
 scanf("%d %d", &a, &b);
 if (a>b)
  printf("number1 is greater than number2\n");
 else
  printf("number2 is greater than number1\n");
}