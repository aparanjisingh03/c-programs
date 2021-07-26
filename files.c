#include<stdio.h>
#include<stdlib.h>
int main()
{
char c;
FILE *fp;
fp=fopen("dolly.txt","r");
if(fp==NULL)
{
printf("unable to open file");
exit(0);
}
c=fgetc(fp);
while(c!=EOF)
{
printf("%c",c);
c=fgetc(fp);
}
fclose(fp);
return 0;
}
