#include <stdio.h>
#include <conio.h>
void main()
{
 int n1, n2, n3;
 void average (int a, int b, int c);
 clrscr();
 printf("enter the three numbers:");
 scanf("%d %d %d", &n1, &n2, &n3);
 average(n1, n2, n3);
 getch();
}
void average (int a, int b, int c)
{
 float average;
 average = (a+b+c)/3.0;
 printf("average=%f", average);
}