#include<iostream>
using namespace std;
main()
{
	int r,c,min,max;
	cout<<"Enter the Number of rows and columns\n";
	cin>>r>>c;
	int a[r][c];
	cout<<"Enter elements of Two-Dimensional array\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cin>>a[i][j];
	}
	min=max=a[0][0];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]<min)
			min=a[i][j];
			if(a[i][j]>max)
			max=a[i][j];
		}
	}
	cout<<"Largest Number = "<<max<<endl<<"Smallest Number = "<<min;	
}
