#include<iostream>
using namespace std;
main()
{
	int num,rev=0;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	while(num!=0)
	{
		rev=rev*10+(num%10);
		num/=10;
	}
	cout<<"Reversed Number is"<<endl<<rev;
}
