#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int n,i,cl=0;
	printf("Enter the no. of array elements\n");
	scanf("%d",&n);
	int *ptr=(int*)malloc(n*sizeof(int));
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
    {
    	scanf("%d",&ptr[i]);
    	cl=cl+ptr[i];
	}
	printf("Sum of the array elements is %d",cl);
	return 0;
}
