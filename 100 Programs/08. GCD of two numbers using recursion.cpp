#include<iostream>
using namespace std;
int i=0,gcd;
int calc(int x,int y)
{
	i++;
	if(i<x && i<y)
	{
		if(x%i==0 && y%i==0)
		gcd=i;
		calc(x,y);
	}
	else
	return gcd;
}
main()
{
	int a,b;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	cout<<"GCD of "<<a<<" and "<<b<<" is = "<<calc(a,b);
}
