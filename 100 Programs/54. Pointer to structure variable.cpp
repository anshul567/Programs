#include<iostream>
using namespace std;
struct a
{
	int x,y;
}ob;
int main()
{
	a *p;
	ob.x=10;
	ob.y=20;
	p=&ob;
	cout<<"Accessing structure variable by pointer\n"<<"x = "<<p->x<<"\t"<<"y = "<<p->y;
	return 0;
}
