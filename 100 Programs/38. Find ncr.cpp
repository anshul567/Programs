#include<iostream>
using namespace std;
int fact(int k)
{
	long long int cl=1;
	for(int i=k;i>0;i--)
	cl*=i;
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
