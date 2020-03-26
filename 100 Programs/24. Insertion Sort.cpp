#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int k=a[i],j=i-1;
		while(j>=0 && a[j]>k)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
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
	insertionSort(a,n);
}
