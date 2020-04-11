#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		a--;b--;
	}
	while(b<0)
	{
		a++;b++;
	}
	printf("Subtraction of two numbers is %d",a);
	return 0;
}
