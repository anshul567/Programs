#include<iostream>
using namespace std;
main()
{
	int y;
	cout<<"Enter year\n";
	cin>>y;
	if(y%4==0 || (y%400==0 && y%100==0))
	cout<<"it's a leap year\n";
	else
	cout<<"Not a leap year";
}
