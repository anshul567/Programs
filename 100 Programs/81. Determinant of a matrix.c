#include<stdio.h>
int main()
{
	int i,j,k,det;
	printf("Enter the order of the square matrix\n");
	scanf("%d",&k);
	int a[k][k];
	printf("Enter the values for the matrix\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("Enter %d%d = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("______________________________________________________\n");
	printf("Given matrix:-\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		printf("%d  ",a[i][j]);
		printf("\n");
	}
	int determinant(int a[k][k],int k)
    {
	    int i,j,m,n,b[k][k],det,c,s=1;
	    if(k==1)
	    return a[0][0];
	    else
	    {
		    det=0;
		    for(c=0;c<k;c++)
		    {
			    m=0;n=0;
			    for(i=0;i<k;i++)
			    {
				    for(j=0;j<k;j++)
				    {
					    b[m][n]=0;
					    if(i!=0 && j!=c)
					    {
					        b[m][n]=a[i][j];
					        if(n<(k-2))
					        n++;
					        else
					        {
					    	    n=0;
					    	    m++;
						    }
				        }
				    }
			    }
			    det=det+s*(a[0][c]*determinant(b,k-1));
			    s=s*-1;
		    }
	    }
	    return det;
    }
	printf("______________________________________________________\n");
	printf("Determinant of the given matrix = %d",determinant(a,k));
	return 0;
}
