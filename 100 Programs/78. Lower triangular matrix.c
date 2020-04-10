#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter the dimension of the square matrix\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the values for the 1st matrix\n");
	for(i=0;i<r;i++)
	{
        for(j=0;j<c;j++)
	    {
	    	printf("Enter %d%d = ",i+1,j+1);
		    scanf("%d",&a[i][j]);
	    }
    }
    printf("___________________________________________________________\n");
    printf("Given matrix\n");	  
    for(i=0;i<r;i++)
	{  
	   for(j=0;j<c;j++)
	   printf("%d  ",a[i][j]);
	   printf("\n");   
    }
    printf("___________________________________________________________\n");
    for(i=0;i<r;i++)
    {
    	for(j=i+1;j<c;j++)
    	{
    		if(a[i][j]!=0)
    		{
    			printf("Given matrix is not a lower triangular matrix");
    			return 0;
			}
		}
	}
	printf("Given matrix is a lower triangular matrix");
    return 0;
}
