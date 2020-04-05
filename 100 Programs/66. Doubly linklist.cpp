#include<iostream>
using namespace std;
struct node
{
	int data;
	node *prevnode;
	node *nextnode;
}*start=NULL,*end=NULL,*newnode,*temp;
class Doublylinklist
{
	int n;
	public:
		Doublylinklist()
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
void Doublylinklist::getnode()
{
	newnode=new node;
	cout<<"Enter the item\n";
	cin>>newnode->data;
	newnode->nextnode=NULL;
	newnode->prevnode=NULL;
}
void Doublylinklist::traverse()
{
	temp=start;
	cout<<"\nCurrent Doubly linklist items are:-\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->nextnode;
	}
}
void Doublylinklist::isempty()
{
	cout<<"Doublylinklist is empty\n";
	getnode();
	start=newnode;
	end=newnode;
	n++;
	traverse();
}
void Doublylinklist::insertatfirst()
{
	if(n==0)
	isempty();
	else
	{
		getnode();
		newnode->nextnode=start;
		start->prevnode=newnode;
		start=newnode;
		n++;
		traverse();
	}
	
}
void Doublylinklist::insertatlast()
{
	if(n==0)
	isempty();
	else
	{
		getnode();
		end->nextnode=newnode;
		newnode->prevnode=end;
		end=newnode;
		n++;
		traverse();
	}
}
void Doublylinklist::insertatpos()
{
	if(n==0)
	cout<<"Empty Doubly linklist, insert at position not possible!\n";
	else
	{
		int pos;
	    cout<<"Enter a position, where you wish to insert the item\n";
	    cin>>pos;
	    if(pos>1 && pos<=n)
	    {
	    	if(pos>n/2)
	    	{
	    		temp=end;
		        for(int i=n;i>=pos+1;i--)
		        temp=temp->prevnode;
		        getnode();
		        newnode->nextnode=temp;
		        newnode->prevnode=temp->prevnode;
		        temp->prevnode->nextnode=newnode;
		        temp->prevnode=newnode;
		        n++;
		        traverse();
			}
			else
			{
				temp=start;
		        for(int i=1;i<pos-1;i++)
		        temp=temp->nextnode;
		        getnode();
		        newnode->nextnode=temp->nextnode;
		        newnode->prevnode=temp;
		        temp->nextnode->prevnode=newnode;
		        temp->nextnode=newnode;
		        n++;
		        traverse();
			}
	    }
	    else
	    cout<<"Invalid position\n";
	}
}
void Doublylinklist::deleteatfirst()
{
	if(n==0)
	cout<<"Doubly linklist is empty, can't delete!\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"Doublylinklist is empty now\n";
		}
		else
		{
			start=start->nextnode;
			start->prevnode=NULL;
			n--;
			traverse();
		}
	}
}
void Doublylinklist::deleteatlast()
{
	if(n==0)
	cout<<"Doubly linklist is empty, can't delete!\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"Doublylinklist is empty now\n";
		}
		else
		{
			end=end->prevnode;
			end->nextnode=NULL;
	        n--;
	        traverse();
		}
	}
}
void Doublylinklist::deleteatpos()
{
	if(n==0)
	cout<<"Doubly linklist is empty, can't delete!\n";
	else
	{
		if(n==1)
		{
			start=NULL;
			end=NULL;
			n--;
			cout<<"Doublylinklist is empty now\n";
		}
		else
		{
			int pos;
	        cout<<"Enter a position, where you wish to delete the item\n";
	        cin>>pos;
	        if(pos>1 && pos<n)
	        {   
	        	if(pos>n/2)
	    	    {
	    		    temp=end;
		            for(int i=n;i>pos;i--)
		            temp=temp->prevnode;
		            temp->prevnode->nextnode=temp->nextnode;
		            temp->nextnode->prevnode=temp->prevnode;
		            n--;
		            traverse();
			    }
			    else
			    {
				    temp=start;
		            for(int i=1;i<pos;i++)
		            temp=temp->nextnode;
		            temp->prevnode->nextnode=temp->nextnode;
		            temp->nextnode->prevnode=temp->prevnode;
		            n--;
		            traverse();
			    }
	        }
	        else
	        cout<<"Invalid position\n";
		}
	}
}
main()
{
	Doublylinklist obj;
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
