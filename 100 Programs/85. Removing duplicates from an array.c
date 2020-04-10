#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=-1;
	while(i<n-1)
	{
		i++;
		for(j=i+1;j<n;j++)
		if(a[i]==a[j])
		{
			for(k=j+1;k<n;k++)
			a[k-1]=a[k];
			n--;
			i=-1;
		}
	}
	printf("__________________________________________\n");
	printf("After removing duplicate elements\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
