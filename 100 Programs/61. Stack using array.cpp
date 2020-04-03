#include<iostream>
using namespace std;
class Stack
{
    int a[10];
    public:
    	int bottom,top;
		stack()
		{
			bottom=0;
			top=0;
		} 
	    void push();
	    void pop();
	    void traverse();	
};
void Stack::traverse()
{
	cout<<"Current stack elements:-\n";
	for(int i=top-1;i>=0;i--)
	cout<<a[i]<<"\t";
}
void Stack::push()
{
	int item;
	if(top<10)
	{
		cout<<"Enter the item to be pushed\n";
		cin>>item;
		a[top++]=item;
		traverse();
	}
	else
	cout<<"Stack is overflow...\n";
}
void Stack::pop()
{
	if(top>1)
	{
		top--;
		traverse();
	}
	else
	{
		top--;
	    cout<<"Stack is empty\n";
    }
}
main()
{
	Stack obj;
	int ch,e;
	do
	{
		cout<<"_________________________________MENU_________________________________\n";
		cout<<"Press 1 to push\n";
		cout<<"Press 2 to pop\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:obj.push();
			break;
			case 2:obj.pop();
			break;
			default:cout<<"Invalid Choice\n";
			break;
		}
		cout<<"\nPress 0 to exit and anything to continue...\n";
		cin>>e;
	}while(e!=0);
}
