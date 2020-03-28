#include<iostream>
#include<string.h>
using namespace std;
struct Student
{
	int sno;
	string sname;
	float marks;
};
main()
{
	int n,avg=0;
	cout<<"Enter the total number of students\n";
	cin>>n;
	Student s[n];
	cout<<"Enter number,name and marks of the student\n";
	for(int i=0;i<n;i++)
	{
		cin>>s[i].sno>>s[i].sname>>s[i].marks;
		avg+=s[i].marks;
	}
	avg/=n;
	cout<<"\nAverage Marks = "<<avg<<endl;
	cout<<"___________________________________________________________\n\n";
	cout<<"S.No\tName\tMarks\n";
	for(int i=0;i<n;i++)
	if(s[i].marks>=avg)
	cout<<s[i].sno<<"\t"<<s[i].sname<<"\t"<<s[i].marks<<endl;
}
