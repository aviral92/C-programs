/*to check if a number is prime or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int num,a,b,c,i;
  clrscr();
  printf("EntER the limit till U want the series\n");
  scanf("%d",&num);
  a=0;
  b=1;
   c=a+b;
  printf("%d\n%d\n",a,b);

  for(i=3;i<num;i++)
  {a=b;
  b=c;
  c=a+b;
  printf("%d\n",c);
  }
getch();
}
                                                                                                                                                                 