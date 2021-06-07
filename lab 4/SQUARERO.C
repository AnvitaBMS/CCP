#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
 float a, b, c, d, root1, root2, r, imag;
 printf("\nenter a, b and c where a*x*x + b*x + c = 0\n");
 scanf("%f %f %f", &a, &b, &c);
 d = (b*b)  - (4*a*c);

 //condition for real and different roots
 if (d > 0) {
  root1 = (-b + sqrt(d))/(2*a);
  root2 = (-b - sqrt(d))/(2*a);
  printf("\n the roots are real and unequal. root1 = %.2f and root2 = %.2f", root1, root2);
 }

 //condition of real and equal roots
 else if (d == 0) {
  root1 = root2 = -b/(2*a);
  printf("\n the roots are real and equal. root1 = %.2f and root2 = %.2f", root1, root2);
 }

 //if roots imaginary
 else {
  r = -b/(2*a);
  imag = sqrt(-d)/(2*a);
  printf("the roots are imaginary. root1 = %.2f + i%.2f and root2 = %.2f - i%.2f", r, imag, r, imag);
 }
 getch();
}
