#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
main()
{
	int size;
	char ch,fname[20];
	cout<<"Enter the file name\n";
	gets(fname);
	ifstream fin;
	fin.open(fname);
    fin.seekg(0,ios::end);
    size=fin.tellg();
    
    for(int i=1;i<=size;i++)
    {
    	fin.seekg(-i,ios::end);
    	fin>>ch;
    	cout<<ch;
	}
	fin.close();
}
