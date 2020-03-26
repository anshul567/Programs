#include<iostream>
#define c 4
using namespace std;
int transpose(int m[][c],int r)
{
	int t[c][r]={0};
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		t[j][i]=m[i][j];
	}
	cout<<"Transposed Matrix\n";
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<r;j++)
		    cout<<t[i][j]<<"  ";
			cout<<"\n";	
		}
}
main()
{
	int r;
	cout<<"Enter the number of rows for the first matrix\n";
	cin>>r;
	int m[r][c];
		cout<<"Enter elements of matrix\n";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
			   cout<<"Enter a"<<i+1<<j+1<<": ";
			   cin>>m[i][j];	
			}	
		}
		cout<<"______________________________________________\n";
		cout<<"Given Matrix\n";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
		    cout<<m[i][j]<<"  ";
			cout<<"\n";	
		}
	transpose(m,r);
}
