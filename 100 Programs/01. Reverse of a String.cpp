#include<iostream>
#include<string>
using namespace std;
main()
{
	string s;
	cout<<"Enter a String"<<endl;
	getline(cin,s);
	cout<<"Reversed String"<<endl;
	for(int i=s.length();i>=0;i--)
	{
		cout<<s[i];
	}
}
