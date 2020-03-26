#include<iostream>
using namespace std;
int res=1;
int fact(int x)
{
	if(x==1)
	return res;
	else
	{
		res=res*x;
		x--;
		fact(x);
	}
}
main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	cout<<"Factroial of "<<n<<" is = "<<fact(n);
}
