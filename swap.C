/*call by value */

#include<stdio.h>
#include<conio.h>

 int main()
{ int a,b;
void   swap(int,int) ;/* prototype of function*/

clrscr();
 printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("The numbers before swap are\n");
printf("%d %d ",a,b);
swap(a,b);
printf("\nThe numbers after swap are\n");
printf("%d %d ",a,b);
getch();
return 0;
}
void swap(int a,int b)
{int temp;
temp=a;
a=b;
b=temp;
}


                                                                         