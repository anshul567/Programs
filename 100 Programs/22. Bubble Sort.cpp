#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
	bubbleSort(a,n);
}
