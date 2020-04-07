#include<iostream>
using namespace std;
class Queue
{
    int a[10],n;
    public:
    	int front,rear;
		Queue()
		{
			n=0;
			front=0;
			rear=0;
		} 
	    void enqueue();
	    void dequeue();
	    void traverse();	
};
void Queue::traverse()
{
	int j=front;
	if(n==0)
	cout<<"Empty queue\n";
	else
	{
	cout<<"Current queue elements:-\n";
	for(int i=1;i<=n;i++)
	{
	    cout<<a[j]<<"\t";
	    j=(j+1)%10;
	}
    }
}
void Queue::enqueue()
{
	int item;
	if(n!=10)
	{
		cout<<"Enter the item to be enqueued\n";
		cin>>item;
		a[rear]=item;
		rear=(rear+1)%10;
		n++;
		traverse();
	}
	else
	cout<<"overflow...\n";
}
void Queue::dequeue()
{
	if(n!=0)
	{
		front=(front+1)%10;
		traverse();
	}
	else
	cout<<"Queue is empty\n";
}
main()
{
	Queue obj;
	int ch,e;
	do
	{
		cout<<"_________________________________MENU_________________________________\n";
		cout<<"Press 1 to enqueue\n";
		cout<<"Press 2 to dequeue\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:obj.enqueue();
			break;
			case 2:obj.dequeue();
			break;
			default:cout<<"Invalid Choice\n";
			break;
		}
		cout<<"\nPress 0 to exit and anything to continue...\n";
		cin>>e;
	}while(e!=0);
}
