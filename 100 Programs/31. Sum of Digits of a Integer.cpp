#include<iostream>
using namespace std;
main()
{
	int n,k=0;
	cout<<"Enter a positive Integer\n";
	cin>>n;
	while(n>0)
	{
		k=k+(n%10);
		n=n/10;
	}
	cout<<"Sum of Digits of the given integer is = "<<k;
}
