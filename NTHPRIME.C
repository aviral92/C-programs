/*to find the nth prime number*/
#include<stdio.h>
void main()
{ int i,a,n,flag,count=1,num=1;
clrscr();
 printf(" Tell me which prime number should I print\n");
 scanf("%d",&n);
 while(count<=n)
 {
 i=2;
 flag=0;
 num++;
 while(flag==0 && i<=num/2)
 {
 if ( num%i==0)
 flag=1;
 i++;
 }
 if ( flag==0 )
 count++;
 }
 printf("The %dth prime number is %d",n,num);
 getch();
 }                                                                                                                   