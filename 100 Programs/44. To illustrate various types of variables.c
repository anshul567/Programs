#include<stdio.h>
int a=10;//Global Variable
int main()
{
	extern int c;//Extern Variable
	static int b=20;//Static Variable
	{
		int d=40;//Automatic or Local Variable
		register int e=50;//Register Variable
	}
	return 0;
}
