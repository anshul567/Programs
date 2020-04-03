#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp1;
	int i;
    char s[20],m[100];
    char ch;
    printf("Enter the file name\n");
    scanf("%s",&s);
    printf("Enter the file content to be appended\n");
    scanf("%s",&m);
    fp1=fopen(s,"r");
    if(fp1==NULL)
    {
    	printf("Problem in opening file\n");
    	return 0;
	}
	printf("\n\nFile content before appending:-\n");
    while((ch=fgetc(fp1))!=EOF)
    printf("%c",ch);
	fclose(fp1);
	
	fp1=fopen(s,"a");
	for(i=0;m[i]!='\0';i++)
	fprintf(fp1,"%c",m[i]);
	fclose(fp1);
	
	printf("\n\nFile content after appending:-\n");
	fp1=fopen(s,"r");
    if(fp1==NULL)
    {
    	printf("Problem in opening file\n");
    	return 0;
	}
    while((ch=fgetc(fp1))!=EOF)
    printf("%c",ch);
	fclose(fp1);
	return 0;
} 
