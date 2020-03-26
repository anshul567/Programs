#include<iostream>
using namespace std;
void fibo(int x,int y)
{
	int c=x+y;
	cout<<c<<endl;
	x=y;
	y=c;
	fibo(x,y);
}
main()
{
	int a=0,b=1;
	cout<<"Fibonacci Series :\n"<<a<<endl<<b<<endl;
	fibo(a,b);	
}

