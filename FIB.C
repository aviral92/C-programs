#include<stdio.h>
#include<conio.h>
void main()
{
  int n,x;
  int fib(int);
  clrscr();
  printf("enter the term of series\n");
  scanf("%d",&n);
  x=fib(n);
  printf("%d",x);
}
int fib(int n)
{
  if(n==1)
    return 0;
  else if(n==2)
    return 1;
     else
    return (fib(n-1)+fib(n-2));
 }                                                                                                                                                                                                     