#include<iostream>
using namespace std;
main()
{
	int n,res=1;
	cout<<"Enter the number\n";
	cin>>n;
	for(int i=1;i<=+n;i++)
    res=res*i;
    cout<<"Factorial of "<<n<<" is = "<<res;
}
