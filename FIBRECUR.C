#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,m=0;
clrscr();
printf("enter total terms:\n");
scanf("%d",&n);
printf("the fibnacci series are:\n");
for(i=1;i<=n;i++)
{
printf("%d\n",fib(m));
m++;
}
getch();
return 0;
}
int fib(int n)
{
if(n==0||n==1)
return n;
else
return(fib(n-1)+fib(n-2));
}

