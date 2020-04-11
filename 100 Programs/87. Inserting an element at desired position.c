#include<stdio.h>
int main()
{
	int i,j,k,n,index;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("_______________________________________________________________________\n");
	printf("Array element are:-\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	printf("\n_______________________________________________________________________\n");
	printf("Enter the element and position at which you wish to insert the element\n");
	scanf("%d%d",&k,&index);
	for(j=n-1;j>index-2;j--)
	a[j+1]=a[j];
	a[j+1]=k;
	n++;
	printf("_______________________________________________________________________\n");
	printf("After inserting the element:-\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	return 0;
}
