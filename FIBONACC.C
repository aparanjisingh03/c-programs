#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,first=0,second=1,sum=0;
clrscr();
printf("enter total terms\n");
scanf("%d",&n);
printf("the fibonacci series are:\n");
printf("%d\n %d\n",first,second);
for(i=0;i<n-2;i++)
{
sum=first+second;
first=second;
second=sum;
printf("%d\n",sum);
}
getch();
return 0;
}