#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
}*newnode;
class Linklist
{
	public:
		int n;
		node *start,*end;
		Linklist()
		{
			start=NULL;
			end=NULL;
		}
		void getnode();
		void traverse(node *);
		node * getlinklist(int);
		node * combine(node *,node *);
};
void Linklist::getnode()
{
	newnode=new node;
	cout<<"Enter the item\n";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void Linklist::traverse(node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->nextnode;
	}
}
node * Linklist::getlinklist(int n)
{
	cout<<"Enter the elements one by one\n";
	getnode();
	start=newnode;
	end=newnode;
	for(int i=2;i<=n;i++)
	{
		getnode();
		end->nextnode=newnode;
		end=newnode;
	}
	return start;
}
node * Linklist::combine(node *s1,node *s2)
{
	node *temp=s1;
	newnode=new node;
	newnode->data=temp->data;
	newnode->nextnode=NULL;
	start=newnode;
	end=newnode;
	temp=temp->nextnode;
	while(temp!=NULL)
	{
		newnode=new node;
		newnode->data=temp->data;
		newnode->nextnode=NULL;
		end->nextnode=newnode;
		end=newnode;
		temp=temp->nextnode;
	}
	
	
	temp=s2;
	newnode=new node;
	newnode->data=temp->data;
	newnode->nextnode=NULL;
	end->nextnode=newnode;
	end=newnode;
	temp=temp->nextnode;
	while(temp!=NULL)
	{
		newnode=new node;
		newnode->data=temp->data;
		newnode->nextnode=NULL;
		end->nextnode=newnode;
		end=newnode;
		temp=temp->nextnode;
	}
	return start;
}
main()
{
	node *t1,*t2,*t3;
	Linklist l1,l2,l3;
	cout<<"Enter the number of linked elements for linked list 1\n";
	cin>>l1.n;
	t1=l1.getlinklist(l1.n);
	cout<<"Enter the number of linked elements for linked list 2\n";
	cin>>l2.n;
	t2=l2.getlinklist(l2.n);
	cout<<"\nLinked list 1:-\n";
	l1.traverse(t1);
	cout<<"\nLinked list 2:-\n";
	l2.traverse(t2);
	cout<<"\nAfter combining 1 and 2, elements of linked list 3:-\n";
	t3=l3.combine(t1,t2);
	l3.traverse(t3);
}
