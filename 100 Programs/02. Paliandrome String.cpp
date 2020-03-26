#include<iostream>
#include<string>
using namespace std;
main()
{
	string s,revs;
	cout<<"Enter a String\n";
	getline(cin,s);
	for(int i=s.length()-1;i>=0;i--)
	revs=revs+s[i];
	if(revs==s)
	cout<<"The given String is a paliandrome\n";
	else
	cout<<"The given String is not a paliandrome\n";
}
