#include<stdio.h>
void addSubstring(char x[])
{
	int pos,i,count=0;
	char res[50],y[20];
	printf("Enter the sub-string\n");
	scanf("%s",&y);
	printf("Enter the position at which you want to add the sub-string\n");
	scanf("%d",&pos);
	for(i=0;i<pos;i++)
	res[i]=x[i];
	for(i=0;y[i]!='\0';i++)
	{
	    res[i+pos-1]=y[i];
	    count++;
    }  
	for(i=pos-1;x[i]!='\0';i++)
	res[i+count]=x[i];
    printf("Resultant String is = %s",res);
}
void delChar(char x[])
{
	char res[50];
	int n,pos,i;
	printf("Enter the number of characters you wish to delete\n");
	scanf("%d",&n);
	printf("Enter the position from where you wish to delete\n");
	scanf("%d",&pos);
		for(i=0;i<pos;i++)
		res[i]=x[i];
		for(i=pos+n;x[i]!='\0';i++)
		res[i-n]=x[i];
		printf("Resultant String is = %s",res);
}
void replChar(char x[])
{
	char res[50],c[1];
	int pos,i;
	printf("Enter the character you wish to replace\n");
	scanf("%s",&c);
	printf("Enter the position where you wish to replace\n");
	scanf("%d",&pos);
	for(i=0;x[i]!='\0';i++)
	{
		if(i==pos-1)
		res[i]=c[0];
		else
		res[i]=x[i];
	}
	printf("Resultant String is = %s",res);
}
main()
{
	char s[50];
	int ch;
	printf("Enter Main String\n");
	fgets(s,sizeof(s),stdin);
	printf("1. For inserting a sub-string at a particular position\n");
	printf("2. To delete the characters from a particular position\n");
	printf("3. To replace a character of the string from any position\n");
	printf("Enter Your Choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	   case 1:addSubstring(s);
	          break;
	   case 2:delChar(s);
	          break;
	   case 3:replChar(s);
	          break;
	   default:printf("Invalid Input\n");
	           break;	
	}
}
