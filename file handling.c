#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	char str[50]="Hello World";
	fp=fopen("text.c","w");
	if(fp=='\0')
	{
		printf("\nFailed to Open File");
	}
	else
	{
		if(strlen(str)>0)
		{
			fputs(str,fp);
			fputs("\n",fp);
		}
		fclose(fp);
		printf("\nData is Writtn in File");
	}
}
