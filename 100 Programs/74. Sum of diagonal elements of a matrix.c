#include<stdio.h>
int main()
{
	int i,j,r,c,res=0;
	printf("Enter the dimension of the matrix\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the values for the matrix\n");
	for(i=0;i<r;i++)
	{
        for(j=0;j<c;j++)
	    {
	    	printf("Enter %d%d = ",i+1,j+1);
		    scanf("%d",&a[i][j]);
	    }
    }
	printf("______________________________________________\n");
		printf("Given Matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
		    printf("%d  ",a[i][j]);
			printf("\n");	
		}
	printf("______________________________________________\n");		  
    for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	if(i==j)
	res+=a[i][j];
	printf("Sum of diagonal elements of the matrix = %d",res);
    return 0;
}
