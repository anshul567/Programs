#include<stdio.h>
#include<conio.h>
void pascalTriangle(int n)
{
   int i,j,res;
   for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i+1);j++)
		printf(" ");
		res=1;
		for(j=1;j<=i;j++)
		{
			printf("%d ",res);
			res=res*(i-j)/j;
		}
		printf("\n");
	}	
}
main()
{
	int n;
	printf("Enter number of rows\n");
	scanf("%d",&n);
	pascalTriangle(n);
}
