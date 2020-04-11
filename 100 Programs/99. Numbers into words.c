#include<stdio.h>
#include<string.h>
int main()
{
	int n,k;
	printf("Enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		k=k*10+(n%10);
		n/=10;
	}
	printf("_______________________________________________\n");
	printf("After converting it into words\n");
	while(k>0)
	{
		if((k%10)==0)
		printf("zero");
		if((k%10)==1)
		printf("one");
		if((k%10)==2)
		printf("two");
		if((k%10)==3)
		printf("three");
		if((k%10)==4)
		printf("four");
		if((k%10)==5)
		printf("five");
		if((k%10)==6)
		printf("six");
		if((k%10)==7)
		printf("seven");
		if((k%10)==8)
		printf("eight");
		if((k%10)==9)
		printf("nine");
		k/=10;
	}
	return 0;
}
