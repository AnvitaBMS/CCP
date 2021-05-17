//c program to find the distance between 2 points
#include <stdio.h>
#include <math.h>
void main()
{
 float distance;
 int x1, y1, x2, y2;
 int dx, dy;
 printf("program for the distance between two points\n");
 printf("enter x1: ");
 scanf("%d", &x1);
 printf("enter y1: ");
 scanf("%d", &y1);
 printf("enter x2: ");
 scanf("%d", &x2);
 printf("enter y2: ");
 scanf("%d"; &y2);
 dx=x2-x1;
 dy=y2-y1;
 distance = sqrt(dx*dx + dy*dy);
 printf("%.4f", distance);
}