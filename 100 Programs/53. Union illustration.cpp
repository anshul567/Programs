#include<iostream>
using namespace std;
union a
{
	int x,y;
};
int main()
{
	a ob;
	ob.x=10;
	cout<<"After making x = 10\n"<<"x = "<<ob.x<<"\t"<<"y = "<<ob.y<<endl;
	ob.y=20;
	cout<<"After making y = 20\n"<<"x = "<<ob.x<<"\t"<<"y = "<<ob.y;
	return 0;
}
