/*GCD of two numbers*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,temp;
  clrscr();
  printf("ENter two numbers\n");
  scanf("%d%d",&a,&b);
  if(a>b)
  { temp=a;
    a=b;
    b=temp;
  }
  while(b%a!=0)
  {   temp=b;
      b=a;
      a=temp%a;
  }
  printf("the GCD is %d\n",a);
getch();
return 0;
}
                                                                                                                                                                           