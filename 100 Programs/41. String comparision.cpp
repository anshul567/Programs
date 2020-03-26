#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string s1,s2;
	cout<<"Enter the first string\n";
	getline(cin,s1);
	cout<<"Enter the second string\n";
	getline(cin,s2);
	if(s1==s2)
	cout<<"Strings are identical";
	else
	cout<<"Strings are diffrent";
}
