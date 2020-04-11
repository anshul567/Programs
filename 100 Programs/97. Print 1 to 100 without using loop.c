#include<stdio.h>  
int main() 
{ 
    static int i=1; 
    if(i<=100) 
	{ 
        printf("%d\n", i++); 
        main(); 
    } 
    return 0; 
} 
