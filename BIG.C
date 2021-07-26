#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,big;
clrscr();
printf("enter 3 values to compare\n");
scanf("%d %d %d",&a,&b,&c);
big=a>b?(a>c?a:c):(b>c?b:c);
printf("the largest value is %d",big);
getch();
}