#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  long int x;
  long int fact(int);
  clrscr();
  printf("enter the no\n");
  scanf("%d",&n);
  x=fact(n);
  printf("factorial is %ld",x);
}
long int fact(int n)
{
  if(n==0)
    return 1;
     else
    return (n*fact(n-1));
 }                                                                                                                                                                                                               