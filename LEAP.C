#include<stdio.h>
main()
{
int year;
clrscr();
printf("enter year:");
scanf("%d",&year);
if((year%400==0||(year%4==0)&&(year%100==0))
{
printf("year is leap year");
}
else
{
printf("year is not leap year");
}
getch();
}