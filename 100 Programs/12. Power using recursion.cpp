#include<iostream>
using namespace std;
int res=1;
int pow(int x,int y)
{
	if(y<1)
	return res;
	else
	{
		res=res*x;
		y=y-1;
		pow(x,y);
	}
}
main()
{
	int a,b;
	cout<<"Enter the number and power\n";
	cin>>a>>b;
	cout<<"Result is = "<<pow(a,b);
}
