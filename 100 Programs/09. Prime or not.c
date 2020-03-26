#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	if(n%i==0)
	flag=1;
	if(flag==0)
	printf("%d is Prime number",n);
	else
	printf("%d is Not a Prime number",n);
	return 0;
}
