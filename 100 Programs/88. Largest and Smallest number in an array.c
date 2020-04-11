#include<stdio.h>
int main()
{
	int i,n,max=0,min=10000;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("__________________________________________\n");
	printf("Largest element of the given array is %d\n",max);
	printf("Smallest element of the given array is %d",min);
	return 0;
}
