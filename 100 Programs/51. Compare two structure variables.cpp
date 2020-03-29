#include<iostream>
using namespace std;
void comp(int a,int b)
{
	if(a==b)
	cout<<"True";
	else
	cout<<"False";
}
struct a
{
	int x;
};
struct b
{
	int y;
};
main()
{
	a s1;
	b s2;
	s1.x=10;
	s2.y=20;
	comp(s1.x,s2.y);
}
