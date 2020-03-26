#include<iostream>
using namespace std;
main()
{
	int a=0,b=1,n,sum;
	cout<<"Enter the number of fibonacci terms you want"<<endl;
	cin>>n;
	cout<<"First "<<n<<" fibonacci terms are\n"<<a<<endl<<b<<endl;
	for(int i=1;i<=n-2;i++)
	{
		sum=a+b;
		cout<<sum<<endl;
		a=b;
		b=sum;
	}
}

