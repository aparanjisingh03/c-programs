#include<stdio.h>
#include<conio.h>
int main()
{
int num,rev=0,temp,r;
clrscr();
printf("enter a number:");
scanf("%d",&num);
temp=num;
while(num>0)
{
r=num%10;
rev=rev*10+r;
num=num/10;
}
if(temp==rev)
printf("number is a palindrome");
else
printf("number is not a palindrome");
getch();
return 0;
}
