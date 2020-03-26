#include<iostream>
#include<string.h>
using namespace std;
int getLength(string s)
{
	string *p=&s;
	int c=0,i=0;
	while((*p)[i]!='\0')
	{
		i++;
		c++;
	}
	return c;
}
main()
{
	string s;
	cout<<"Enter a string\n";
	getline(cin,s);
	cout<<"Length of given string is "<<getLength(s);
}
