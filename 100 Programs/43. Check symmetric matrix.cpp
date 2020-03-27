#include<iostream>
using namespace std;
main()
{
	int r,c;
	cout<<"Enter the number of rows for the matrix\n";
	cin>>r;
	cout<<"Enter the number of columns for the matrix\n";
	cin>>c;
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
	int t[c][r]={0};
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		t[j][i]=m[i][j];
	}
	int count=0;
	if(r!=c)
	cout<<"Given matrix is not symmetric";
	else
	{
		for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		if(m[i][j]!=t[i][j])
		count++;
		if(count==0)
		cout<<"Given matrix is symmetric";
		else
		cout<<"Given matrix is not symmetric";
	}
}
