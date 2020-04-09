#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter the dimensions of the matrix\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the values for the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter %d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("________________________________________________________\n");
	printf("Given Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d  ",a[i][j]);
		printf("\n");
	}
	printf("________________________________________________________\n");
	printf("Transposed matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		printf("%d  ",a[j][i]);
		printf("\n");
	}
	return 0;
}
