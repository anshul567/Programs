#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;
string convert(int x)
{
	if(4+2==x)
	return "011";
	if(2+1==x)
	return "110";
	if(4+1==x)
	return "101";
	if(2==x)
	return "010";
	if(1==x)
	return "100";
	if(4==x)
	return "001";
	if(4+2+1==x)
	return "111";
}
main()
{
	string hex[]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
	int n;
	cout<<"Enter the octal number\n";
	cin>>n;
	string s;
	while(n!=0)
	{
		int k=n%10;
		s.append(convert(k));
		n/=10;
	}
	reverse(s.begin(), s.end());
	int cnt=0,indx=0,i=s.size()-1;
	string f;
    while(i>=3)
    {
    	for(int j=1;j<=4;j++)
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
		f.append(hex[indx]);
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
        f.append(hex[indx]);
	}
        reverse(f.begin(), f.end());
        cout<<"Corresponding Hexa-decimal Number = "<<f; 
}
