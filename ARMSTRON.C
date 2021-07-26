#include<stdio.h>
#include<conio.h>
int main()
{
int num,a,sum=0,r;
clrscr();
printf("enter a number:");
scanf("%d",&num);
a=num;
while(num!=0)
{
r=num%10;
sum=sum+r*r*r;
num=num/10;
}
if(a==sum)
printf("%d is an armstrong number",sum);
else
printf("%d is not an armstrong number",sum);
getch();
return 0;
}