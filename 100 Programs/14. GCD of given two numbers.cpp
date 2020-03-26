#include<iostream>
using namespace std;
main()
{
	int a,b,gcd;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	for(int i=1;i>0;i++)
	{
		if(i<a &&i<b)
		{
			if(a%i==0 && b%i==0)
		    gcd=i;
		}
		else
		break;
	}
	cout<<"GCD of "<<a<<" and "<<b<<" is = "<<gcd;
}
