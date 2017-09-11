#include <iostream>
using namespace std;

void prime(int a)
{
	int i;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{//cout<<"\nthe number  not a prime number";
		break;}
		else
		if(i==(a-1))
		cout<<"\n"<<a;
		
	}
}
	  
int main() {
	int lb,ub;
	cout<<"enter the range (i.e) lowerbound and upperbound";
	cin>>lb>>ub;
	cout<<"\n"<<lb<<ub;
	cout<<"the prime numbers between :: "<<lb<<"  and  "<<ub<<"  are ";
	for(int i=lb;i<=ub;i++)
	prime(i);
	
	return 0;
}