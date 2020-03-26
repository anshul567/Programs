#include<iostream>
using namespace std;
void merging(int a[],int f,int m,int l)
{
	int i,j,k;
	int n1=m-f+1;
	int n2=l-m;
	int L[n1+1],R[n2+1];
	for(i=0;i<n1;i++)
	L[i]=a[f+i];
	L[n1]=10000;
	for(j=0;j<n2;j++)
	R[j]=a[m+j+1];
	R[n2]=10000;
	i=0;
	j=0;
	for(k=f;k<=l;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
}
void mergeSort(int a[],int f,int l)
{
	if(f<l)
	{
		int mid=(f+l)/2;
	   	mergeSort(a,f,mid);
	   	mergeSort(a,mid+1,l);
	   	merging(a,f,mid,l);
	}
}
void value(int a[],int n)
{
	mergeSort(a,0,n-1);
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
	value(a,n);
}
