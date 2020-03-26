#include<iostream>
using namespace std;
main()
{
	int r1,r2,c1,c2;
	cout<<"Enter the number of rows for the first matrix\n";
	cin>>r1;
	cout<<"Enter the number of columns for the first matrix\n";
	cin>>c1;
	cout<<"Enter the number of rows for the second matrix\n";
	cin>>r2;
	cout<<"Enter the number of columns for the second matrix\n";
	cin>>c2;
	if(c1!=r2)
	cout<<"Matrix multiplication not possible!";
	else
	{
		int m1[r1][c1],m2[r2][c2],res[r1][c2]={0};
		cout<<"Enter elements of first matrix\n";
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
			   cout<<"Enter a"<<i+1<<j+1<<": ";
			   cin>>m1[i][j];	
			}	
		}
		cout<<"Enter elements of second matrix\n";
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
		    {
		    	cout<<"Enter b"<<i+1<<j+1<<": ";
			    cin>>m2[i][j];
			}	
		}
		cout<<"______________________________________________\n";
		cout<<"First Matrix\n";
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
		    cout<<m1[i][j]<<"  ";
			cout<<"\n";	
		}
		cout<<"Second Matrix\n";
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
		    cout<<m2[i][j]<<"  ";
			cout<<"\n";	
		}
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				for(int k=0;k<c1;k++)
				{
					res[i][j]+=m1[i][k]*m2[k][j];
				}
			}
		}
		cout<<"______________________________________________\n";
		cout<<"Resultant Matrix\n";
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
		    cout<<res[i][j]<<"  ";
			cout<<"\n";	
		}
	}
}
