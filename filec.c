#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	FILE *fp1,*fp2;
	fp1=fopen("dolly.txt","r");
	fp2=fopen("kim.txt","w");
	c=fgetc(fp1);
	while(c!=EOF)
	{
		fputc(c,fp2);
		c=fgetc(fp1);
	}
	printf("file copied");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
