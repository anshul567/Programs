#include<iostream>
#include<string.h>
using namespace std;
char abc[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char ABC[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int get(char c)
{
	for(int i=0;i<26;i++)
	if(abc[i]==c)
	return i;
	for(int i=0;i<26;i++)
	if(ABC[i]==c)
	return i;
}
main()
{
	string s;
	cout<<"Enter the string\n";
	getline(cin,s);
	for(int i=0;i<s.length()-1;i++)
	for(int j=0;j<s.length()-i-1;j++)
	if(get(s[j])>get(s[j+1]))
	{
		int temp=s[j];
		s[j]=s[j+1];
		s[j+1]=temp;
	}
	cout<<"Sorted String\n"<<s;
}
