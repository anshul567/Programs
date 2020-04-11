#include<stdio.h>
int main()
{
    int n,i,j,cnt=1;
    printf("Enter the number of rows of floyd's triangle to print\n");
    scanf("%d",&n);
    printf("___________________________________________________\n");
    for(i=1;i<=7;i++)
    {
    	for(j=1;j<=i;j++)
    	{
		    printf("%d  ",cnt);
		    cnt++;
	    }
    	printf("\n");
	}
    return 0;
}
