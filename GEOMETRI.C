#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,x,i,sum=0;
clrscr();
printf("\n geometric progression");
printf("enter the limit");
scanf("%d",&n);
printf("enter the value of x");
scanf("%d",&x);
if(x<0||n<0)
printf("illegal value");
else
{
for(i=0;i<=n;i++)
sum=sum+pow(x,i);
}
printf("sum=%d",sum);
getch();
return 0;
}
