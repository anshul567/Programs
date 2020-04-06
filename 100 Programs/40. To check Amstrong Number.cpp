#include<iostream>
using namespace std;
int num(int n)
{
	int cnt=0;
	while(n>0)
	{
		n/=10;
		cnt++;
	}
	return cnt;
}
int pow(int x,int y)
{
	int res=1;
	for(int i=1;i<=y;i++)
	res*=x;
	return res;
}
main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	int o=n,k,cl=0;
	int p=num(n);
	while(n>0)
	{
		k=n%10;
		cl=cl+pow(k,p);
		n/=10;
	}
	if(o==cl)
	cout<<"It is an Amstrong Number";
	else
	cout<<"It is not an Amstrong Number";
}
