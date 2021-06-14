#include <stdio.h>
#include <conio.h>
int main()
{
 int n1, n2, rem, i;
 printf("enter the first number of the range: \n");
 scanf("%d", &n1);
 printf("enter the last number of the range: \n");
 scanf("%d", &n2);
 printf("\n even numbers between %d and %d are: ", n1, n2);
 for(i=n1; i<=n2; i++)
 {
  rem=i%2;
  if(rem==0)
  printf("\n %d",i);
  getch();
 }
 return (0);
}