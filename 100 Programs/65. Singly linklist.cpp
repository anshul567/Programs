#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
}*start=NULL,*end=NULL,*newnode,*temp;
class Linklist
{
	int n;
	public:
		Linklist()
	    {
		    n=0;
	    }
		void getnode();
		void traverse();
		void isempty();
		void insertatfirst();
		void insertatlast();
		void insertatpos();
		void deleteatfirst();
		void deleteatlast();
		void deleteatpos();
};
void Linklist::getnode()
{
	newnode=new node;
	cout<<"Enter the item\n";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void Linklist::traverse()
{
	temp=start;
	cout<<"\nCurrent linklist items are:-\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->nextnode;
	}
}
void Linklist::isempty()
{
	cout<<"Linklist is empty\n";
	getnode();
	start=newnode;
	end=newnode;
	n++;
	traverse();
}
void Linklist::insertatfirst()
{
	if(n==0)
	isempty();
	else
	{
		getnode();
		newnode->nextnode=start;
		start=newnode;
		n++;
		traverse();
	}
	
}
void Linklist::insertatlast()
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
void Linklist::insertatpos()
{
	if(n==0)
	cout<<"Empty linklist, insert at position not possible!\n";
	else
	{
		int pos;
	    cout<<"Enter a position, where you wish to insert the item\n";
	    cin>>pos;
	    if(pos>1 && pos<=n)
	    {
	    	temp=start;
		    for(int i=1;i<pos-1;i++)
		    temp=temp->nextnode;  
		    getnode();
		    newnode->nextnode=temp->nextnode;
		    temp->nextnode=newnode;
		    n++;
		    traverse();
	    }
	    else
	    cout<<"Invalid position\n";
	}
}
void Linklist::deleteatfirst()
{
	if(n==0)
	cout<<"linklist is empty, can't delete!\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"Linklist is empty now\n";
		}
		else
		{
			start=start->nextnode;
			n--;
			traverse();
		}
	}
}
void Linklist::deleteatlast()
{
	if(n==0)
	cout<<"linklist is empty, can't delete!\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"Linklist is empty now\n";
		}
		else
		{
			temp=start;
            while(temp->nextnode->nextnode!=NULL)
	        temp=temp->nextnode;
	        temp->nextnode=NULL;
	        end=temp;
	        n--;
	        traverse();
		}
	}
}
void Linklist::deleteatpos()
{
	if(n==0)
	cout<<"linklist is empty, can't delete!\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"Linklist is empty now\n";
		}
		else
		{
			int pos;
	        cout<<"Enter a position, where you wish to delete the item\n";
	        cin>>pos;
	        if(pos>1 && pos<n)
	        {
	        	temp=start;
		        for(int i=1;i<pos-1;i++)
		        temp=temp->nextnode;
		        temp->nextnode=temp->nextnode->nextnode;
		        n--;
		        traverse();
	        }
	        else
	        cout<<"Invalid position\n";
		}
	}
}
main()
{
	Linklist obj;
	int ch,e;
	do
	{
		cout<<"_________________________________MENU_________________________________\n";
		cout<<"Press 1 to insert at first\n";
		cout<<"Press 2 to insert at last\n";
		cout<<"Press 3 to insert at position\n";
		cout<<"Press 4 to delete at first\n";
		cout<<"Press 5 to delete at last\n";
		cout<<"Press 6 to delete at position\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1: obj.insertatfirst();
			break;
			case 2: obj.insertatlast();
			break;
			case 3: obj.insertatpos();
			break;
			case 4: obj.deleteatfirst();
			break;
			case 5: obj.deleteatlast();
			break;
			case 6: obj.deleteatpos();
			break;
			default:cout<<"Invalid Choice\n";
			break;
		}
		cout<<"\nPress 0 to exit and anything to continue...\n";
		cin>>e;
	}while(e!=0);
}
