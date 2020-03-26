#include<iostream>
using namespace std;
int fact(int k)
{
	long long int cl=1;
	int i=k;
	do
	{
		cl*=i;
		i--;
	}while(i>0);
	return cl;
}
main()
{
	int n,r;
	cout<<"Enter the no. of items you wish to choose\n";
	cin>>r;
	cout<<"Enter the total no. of items\n";
	cin>>n;
	long long int c=fact(n)/(fact(n-r)*fact(r));
	cout<<"Result = "<<c;
}
