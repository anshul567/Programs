#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="0",f[]="0";
	int n,k=0,cnt=0,indx=0,i,j;
	printf("Enter the octal number\n");
	scanf("%d",&n);
	while(n>0)
	{
		k=k*10+(n%10);
		n/=10;
	}
	while(k>0)
	{
		if(k%10==0)
		{
		    strcat(s,"000");
		    k/=10;
	    }
		if(k%10==1)
		{
		    strcat(s,"001");
		    k/=10;
	    }
		if(k%10==2)
		{
		    strcat(s,"010");
		    k/=10;
	    }
		if(k%10==3)
		{
		    strcat(s,"011");
		    k/=10;
	    }
		if(k%10==4)
		{
		    strcat(s,"100");
		    k/=10;
	    }
		if(k%10==5)
		{
		    strcat(s,"101");
		    k/=10;
	    }
		if(k%10==6)
		{
		    strcat(s,"110");
		    k/=10;
	    }
		if(k%10==7)
		{
		    strcat(s,"111");
		    k/=10;
	    }
	}
	i=strlen(s)-1;
    while(i>=3)
    {
    	for(j=1;j<=4;j++)
    	{
    		if(s[i]=='1' && j==1)
    		indx+=1;
    		if(s[i]=='1' && j==2)
    		indx+=2;
    		if(s[i]=='1' && j==3)
    		indx+=4;
    		if(s[i]=='1' && j==4)
    		indx+=8;
    		i--;
		}
		if(indx==0)
		strcat(f,"0");
		if(indx==1)
		strcat(f,"1");
		if(indx==2)
		strcat(f,"2");
		if(indx==3)
		strcat(f,"3");
		if(indx==4)
		strcat(f,"4");
		if(indx==5)
		strcat(f,"5");
		if(indx==6)
		strcat(f,"6");
		if(indx==7)
		strcat(f,"7");
		if(indx==8)
		strcat(f,"8");
		if(indx==9)
		strcat(f,"9");
		if(indx==10)
		strcat(f,"A");
		if(indx==11)
		strcat(f,"B");
		if(indx==12)
		strcat(f,"C");
		if(indx==13)
		strcat(f,"D");
		if(indx==14)
		strcat(f,"E");
		if(indx==15)
		strcat(f,"F");
		indx=0;
	}
	if(i>=0 && i<3)
	{
		while(i>=0)
    	{
    		if(s[i]=='1' && i==2)
    		indx+=1;
    		if(s[i]=='1' && i==1)
    		indx+=2;
    		if(s[i]=='1' && i==0)
    		indx+=4;
    		i--;
        }
        if(indx==0)
		strcat(f,"0");
		if(indx==1)
		strcat(f,"1");
		if(indx==2)
		strcat(f,"2");
		if(indx==3)
		strcat(f,"3");
		if(indx==4)
		strcat(f,"4");
		if(indx==5)
		strcat(f,"5");
		if(indx==6)
		strcat(f,"6");
		if(indx==7)
		strcat(f,"7");
		if(indx==8)
		strcat(f,"8");
		if(indx==9)
		strcat(f,"9");
	}
        printf("Corresponding Hexa-decimal Number = ");
        for(i=strlen(f)-1;i>=1;i--)
        printf("%c",f[i]);
    return 0;
}
