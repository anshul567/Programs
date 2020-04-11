#include<stdio.h>
int fact(int x)
{
	int i,res=1;
	for(i=x;i>1;i--)
	res*=i;
	return res;
}
int main()
{
	int n,res=0,s;
	printf("Enter the number\n");
	scanf("%d",&n);
	s=n;
	while(n>0)
	{
		res+=fact(n%10);
		n/=10;
	}
	if(s==res)
	printf("It's a Strong number");
	else
	printf("Not a Strong number");
	return 0;
}

