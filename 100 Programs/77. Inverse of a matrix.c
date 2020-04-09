#include<stdio.h>
int main()
{
	int i,j,r,c,ch;
	float d;
	printf("press 2 if matrix dimensions are 2x2 and press 3 for 3x3\n");
	scanf("%d",&ch);
	if(ch==2)
	r=c=2;
	if(ch==3)
	r=c=3;
	int a[r][c];
	float t[r][c];
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
	if(ch==2)
	{
	    d=(a[0][0]*a[1][1]-a[1][0]*a[0][1]);
	    t[0][0]=a[1][1];
	    t[0][1]=a[0][1]*-1;
	    t[1][0]=a[1][0]*-1;
	    t[1][1]=a[0][0];
    }
    if(ch==3)
    {
    	d=(a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]))-(a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]))+(a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
	    t[0][0]=(a[1][1]*a[2][2]-a[2][1]*a[1][2]);
	    t[0][1]=(a[0][2]*a[2][1]-a[2][2]*a[0][1]);
	    t[0][2]=(a[0][1]*a[1][2]-a[1][1]*a[0][2]);
	    t[1][0]=(a[1][2]*a[2][0]-a[2][2]*a[1][0]);
	    t[1][1]=(a[0][0]*a[2][2]-a[2][0]*a[0][2]);
	    t[1][2]=(a[0][2]*a[1][0]-a[1][2]*a[0][0]);
	    t[2][0]=(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
	    t[2][1]=(a[0][1]*a[2][0]-a[2][1]*a[0][0]);
	    t[2][2]=(a[0][0]*a[1][1]-a[1][0]*a[0][1]);
	}
	printf("________________________________________________________\n");
	printf("Inversed Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%f  ",t[i][j]);
		printf("\n");
	}
	return 0;
}	
