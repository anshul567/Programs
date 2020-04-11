#include<stdio.h>
int main()
{
	int n,k=0,r=1;
	printf("Enter the Decimal number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		k=k+(n%8)*r;
		r*=10;
		n/=8;
	}
	printf("Corresponding Octal number is %d",k);
	return 0;
}
