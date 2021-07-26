#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,dis,r1,r2,img,real;
clrscr();
printf("enter coefficent of x^2:");
scanf("%f",&a);
printf("enter coefficent of x:");
scanf("%f",&b);
printf("enter constant value:");
scanf("%f",&c);
printf("THE QUADRATIC EQUATION IS:%fx^2+%fx+%f=0\n",a,b,c);
dis=b*b-4*a*c;
if(dis>0)
{
r1=(-b+sqrt(dis)/(2*a));
r2=(-b-sqrt(dis)/(2*a));
printf("the equation has distant roots\n");
printf("root 1=%2f\n",r1);
printf("root 2=%2f\n",r2);
}
else if(dis==0)
{
r1=r2=-b/2*a;
printf("the equation have equal roots\n");
printf("root1=root2=%2f\n",r1);
}
else if(dis<0)
{
printf("it doesnot have real roots\n");
real=-b/2*a;
img=sqrt(-dis)/(2*a);
printf("root 1=%2f+%2f",real,img);
printf("root 2=%2f-%2f",real,img);
}
getch();
return 0;
}
