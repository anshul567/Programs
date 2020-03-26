#include<iostream>
using namespace std;
main()
{
	int n,min,max;
	cout<<"Enter the number of array elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter array elements\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	min=max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
	}
	cout<<"Largest Number = "<<max<<endl<<"Smallest Number = "<<min;
}
