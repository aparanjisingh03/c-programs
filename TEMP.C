#include<stdio.h>
#include<conio.h>
int main()
{
int f,c,fa,ce;
clrscr();
printf("enter a celsius value to convert into farenheit\n");
scanf("%f\n",&c);
f=(c*1.8)+32;
printf("the farenheit value is : %0.2f",f);
printf("enter a farenheit value to convert into celsius\n");
scanf("%f\n",&fa);
ce=(fa-32)/1.8;
printf("the celsius value is : %0.2f",ce);
getch();
return 0;
}
