#include<stdio.h>
int main()
{
	int i,j,k,n,index;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("____________________________________________________________\n");
	printf("Array element are:-\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	printf("\n____________________________________________________________\n");
	printf("Enter the position at which you wish to delete the element\n");
	scanf("%d",&index);
	for(j=index;j<n;j++)
	a[j-1]=a[j];
	n--;
	printf("____________________________________________________________\n");
	printf("After deleting the element:-\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	return 0;
}
