#include<stdio.h>
int main()
{
	int i,n,max=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
	printf("__________________________________________\n");
	printf("Largest element of the given array is %d",max);
	return 0;
}
