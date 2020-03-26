#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter two values\n";
	cin>>a>>b;
	cout<<"Before swap\n"<<"a = "<<a<<" b = "<<b<<endl;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"After swap\n"<<"a = "<<a<<" b = "<<b<<endl;
}
