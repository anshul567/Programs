#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
main()
{
	int w=1,l=1,c=0;
	char ch,fname[20];
	cout<<"Enter the file name\n";
	gets(fname);
	ifstream fin;
	fin.open(fname);
	while(fin>>ch)
	{
		c++;
		if(ch==' ')
		w++;
		if(ch=='\n')
		l++;
	}
	fin.close();
	cout<<"Number of characters = "<<c<<endl;
	cout<<"Number of words = "<<w<<endl;
	cout<<"Number of lines = "<<l;
}
