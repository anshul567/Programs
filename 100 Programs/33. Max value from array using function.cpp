#include<iostream>
using namespace std;
int maxValue(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	if(a[i]>max)
	max=a[i];
	return max;
}
main()
{
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"Enter array elements\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	int res=maxValue(a,n);
	cout<<"Maximum value is = "<<res;
}
