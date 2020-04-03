#include<iostream>
using namespace std;
class Queue
{
    int a[10];
    public:
    	int first,last;
		Queue()
		{
			first=0;
			last=0;
		} 
	    void enqueue();
	    void dequeue();
	    void traverse();	
};
void Queue::traverse()
{
	cout<<"Current queue elements:-\n";
	for(int i=first;i<last;i++)
	cout<<a[i]<<"\t";
}
void Queue::enqueue()
{
	int item;
	if(last!=10)
	{
		cout<<"Enter the item to be enqueued\n";
		cin>>item;
		a[last++]=item;
		traverse();
	}
	else
	cout<<"overflow...\n";
}
void Queue::dequeue()
{
	if(first+1!=last)
	{
		first++;
		traverse();
	}
	else
	{
		first++;
	    cout<<"Queue is empty\n";
	}
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
