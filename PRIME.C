#include<stdio.h>
#include<conio.h>
int main()
{
int num,cnt=0,i;
clrscr();
printf("enter a number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
  if(num%i==0)
   cnt++;
}
if(cnt==2)
printf("%d is a prime number",num);
else
printf("%d is not a prime number",num);
getch();
return 0;
}