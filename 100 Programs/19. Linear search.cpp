#include<iostream>
using namespace std;
int a[10],i=0;
int getNum(int n)
{
	for(int i=0;i<10;i++)
	{
		if(a[i]==n)
		return i+1;
	}
	return -1;
}
main()
{
	int n;
	cout<<"Enter 10 numbers\n";
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<"Enter the number you wish to search\n";
	cin>>n;
	int res=getNum(n);
	if(res==-1)
	cout<<"Number not found\n";
	else
	cout<<"Number found at position = "<<res<<endl;
}
