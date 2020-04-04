#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *nextnode;
}*start=NULL,*end=NULL,*temp,*newnode;
class Stack
{
	int n;
	public:
		Stack()
		{
		   n=0;
	    }
		void getnode();
		void traverse();
		void isempty();
		void push();
		void pop();
};
void Stack::getnode()
{
	newnode=new Node;
	cout<<"Enter the item\n";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void Stack::traverse()
{
	temp=start;
	cout<<"\nCurrent stack items:-\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->nextnode;
	}
}
void Stack::isempty()
{
	getnode();
	start=newnode;
	end=newnode;
	n++;
	traverse();
}
void Stack::push()
{
	if(n==0)
	isempty();
	else
	{
		getnode();
		end->nextnode=newnode;
		end=newnode;
		n++;
		traverse();
	}
}
void Stack::pop()
{
	temp=start;
	if(temp->nextnode==NULL)
	{
		start=NULL;
		end=NULL;
		n--;
		cout<<"Stack is empty now";
	}
	else
	{
		while(temp->nextnode->nextnode!=NULL)
	    temp=temp->nextnode;
	    temp->nextnode=NULL;
	    end=temp;
	    n--;
	    traverse();
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
