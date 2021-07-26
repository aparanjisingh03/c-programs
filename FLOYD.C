#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,j,count=0;
clrscr();
printf("enter number of rows");
scanf("%d",&num);
for(i=1;i<=num;i++)
 {
  for(j=1;j<=i;j++)
   {
    count++;
    printf("%d",count);
   }
  printf("\n");
 }
getch();
return 0;
}
