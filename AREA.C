#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int a,b,c,s;
float area;
clrscr();
printf("enter 3 sides of a triangle\n");
scanf("%d %d %d",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area of the triangle using heron formula is:%f",area);
getch();
return 0;
}