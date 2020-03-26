#include<iostream>
using namespace std;
void selectionSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int k=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[k])
			k=j;
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
	cout<<"Sorted array\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}
main()
{
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	selectionSort(a,n);
}
