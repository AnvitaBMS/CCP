#include <stdio.h>
#include <conio.h>
#include <math.h>
float areaoftriangle(float, float, float);
int main()
{
 float a, b, c, area;
 clrscr();
 printf("enter the lengths of three sides of a triangle\n");
 scanf("%f %f %f", &a, &b, &c);
 area=areaoftriangle(a, b, c);
 printf("area of triangle = %.2f\n", area);
 getch();
 return 0;
}
float areaoftriangle(float a, float b, float c)
{
 float s, area;
 s = (a+b+c)/2;
 area = sqrt(s*(s-a)*(s-b)*(s-c));
 return area;
}