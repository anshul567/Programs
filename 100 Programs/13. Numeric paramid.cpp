#include<iostream>
using namespace std;
main()
{
	int n,k=0;
	cout<<"Pyramid of numbers:-\n";
	for(int i=1;i<=5;i++)
	{
		n=1;
		for(int j=1;j<=11;j++)
		{
			if((j<(5-k)) || (j>(5+k)))
		    cout<<" ";
		    else
		    {
		    	cout<<n;
		    	n++;
			}
		}
		k++;
		cout<<endl;
	}
}
