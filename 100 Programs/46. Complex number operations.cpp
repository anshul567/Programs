#include<iostream>
using namespace std;
struct Complex
{
	int real,img;
};
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
main()
{
	Complex c1,c2;
	cout<<"Enter the real and imaginary part of first complex number\n";
	cin>>c1.real>>c1.img;
	cout<<"Enter the real and imaginary part of second complex number\n";
	cin>>c2.real>>c2.img;
	int k;
	do
	{
	   cout<<"Press 1 to add the complex numbers\n";
	   cout<<"Press 2 to subtract the complex numbers\n";
	   cout<<"Press 3 to multiply the complex numbers\n";
	   cout<<"Enter Your Choice\n";
	   int ch;
	   cin>>ch;
	   switch(ch)
	   {
	   	    case 1:cout<<"Addition of the given complex numbers is = "<<add(c1.real,c2.real)<<"+"<<add(c1.img,c2.img)<<"j\n";
	   	        break;
            case 2:cout<<"Subtraction of the given complex numbers is = "<<sub(c1.real,c2.real)<<"+"<<sub(c1.img,c2.img)<<"j\n";
                break;
            case 3:cout<<"Multiplication of the given complex numbers is = "<<mul(c1.real,c2.real)<<"+"<<mul(c1.img,c2.img)<<"j\n";
                break;
            default:cout<<"Invalid Input\n";
                break;
	   }
	   cout<<"Press '0' to exit and anything to continue\n";
	   cin>>k;	
	}while(k!=0);
}
