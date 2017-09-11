#include <iostream>
#include <cmath>
using namespace std;

void prime(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{cout<<"\nthe number  not a prime number";
		break;}
		else
		if(i==(a-1))
		cout<<"\nthe number is prime";
		
	}
	
}
void armstrong(int b,int c)
{
	int i,s[c],sum=0,p=b;
	c= 0;    
            while (b!= 0)
            {
            s[c]= b % 10;
            b/= 10;
            c++;
            }
            
            for(i=0;i<c;i++)
	{sum+=pow(s[i],c);}
	if(p==sum)
	cout<<"\nthe number is armstrong ";
	else
	cout<<"\nthe number is not armstrong";
	
}


void strong(int m1,int c1)
{
	int i,s[c1],sum=0,p=m1,fact;
	c1= 0;    
            while (m1!= 0)
            {
            s[c1]= m1 % 10;
            m1/= 10;
            c1++;
            }
            
            for(i=0;i<c1;i++)
	{
		fact=1;
		for(int j=1; j<=s[i]; ++j)
            {
            fact*= j;
            }
		
		sum+=fact;
		
	}
	if(p==sum)
	cout<<"\nthe number is strong ";
	else
	cout<<"\nthe number is not strong";
	
}
int main() {
	int x,cj,count;
	cout<<"enter the number";
	cin>>x;
	cj=x;
	while(x != 0)
    {
        x /= 10;
        ++count;
    }

	prime(cj);
	armstrong(cj,count);
	strong(cj,count);
	return 0;
}