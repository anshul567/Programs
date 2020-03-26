#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	int o=n,k,cl=0;
	while(n>0)
	{
		k=n%10;
		cl=cl+(k*k*k);
		n/=10;
	}
	if(o==cl)
	cout<<"It is an Amstrong Number";
	else
	cout<<"It is not an Amstrong Number";
}
