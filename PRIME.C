/*to check if a number is prime or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i=2,flag=0;
  clrscr();
  printf("EntER the number to be checked\n");
  scanf("%d",&num);

    while(flag==0 && i<num/2)
  { if(num%i==0)
       flag=1;
   i++;
}
if(flag==1)
   printf("Number is not prime\n ");
else
   printf("Number is prime\n");

  getch();
}                                                                                                                              