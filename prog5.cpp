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


void perfect(int n)
{int sum=0;
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
		
	}

	if(sum+1==n)
	cout<<"\nthe number is perfect";
	else
	cout<<"\nthe number is not perfect";}
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
	perfect(cj);
	return 0;
}