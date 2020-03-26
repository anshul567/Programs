#include<iostream>
using namespace std;
int binarySearch(int a[],int f,int l,int item)
{
	if(f>=l)
	return -1;
	else
	{
		int m=(f+l)/2;
		if(a[m]==item)
		return m+1;
		if(a[m]<item)
		f=m+1;
		if(a[m]>item)
		l=m-1;
		binarySearch(a,f,l,item);
	}
}
main()
{
	int n,item;
	cout<<"Enter the number of array elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter the array\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter item to be searched\n";
	cin>>item;
	int f=0,l=n-1;
	int res=binarySearch(a,f,l,item);
	if(res==-1)
	cout<<"Item not found";
	else
	cout<<"Item found at position = "<<res;
}
