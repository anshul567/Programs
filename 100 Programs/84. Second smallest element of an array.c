#include<stdio.h>
int main()
{
	int i,n,min=10000,smin;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min)
		{
			smin=min;
			min=a[i];
		}
	}
	printf("__________________________________________\n");
	printf("Second smallest element of the given array is %d",smin);
	return 0;
}
