#include<stdio.h>
int main()
{
	int i=1,n,res=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	while(i<n)
	{
	   if(n%i==0)
	   res+=i;
	   i++;
	}
	if(n==res)
	printf("It's a Perfect number");
	else
	printf("Not a Perfect number");
	return 0;
}

