#include<iostream>
using namespace std;
main()
{
	int m;
	cout<<"Please Enter Marks\n";
	cin>>m;
	if(m>=60)
	cout<<"FIRST";
	if(m>=50 && m<60)
	cout<<"SECOND";
	if(m>=40 && m<50)
	cout<<"THIRD";
	if(m<40)
	cout<<"FAILED";
}
