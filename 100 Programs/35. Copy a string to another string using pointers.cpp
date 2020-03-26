#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string s1,s2="Hello",*p;
	cout<<"Enter a string\n";
	getline(cin,s1);
	cout<<"s1 = "<<s1<<endl<<"s2 = "<<s2<<endl;
	p=&s1;
	s2=*p;
	cout<<"After Copying\n";
	cout<<"s1 = "<<s1<<endl<<"s2 = "<<s2<<endl;
}
