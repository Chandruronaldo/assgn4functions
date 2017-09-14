#include <iostream>
#include <cmath>
using namespace std;

void perfect(int n)
{int sum=0;
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
		
	}

	if(sum+1==n)
	cout<<"\n"<<n;

	
}
int main() {
	int x,cj,count,lb,ub;
	cout<<"enter the lower bound and upper bound of the range\n";
	cin>>lb>>ub;
	cout<<"\n the perfect numbers between the given range are \n";
	for(int i=lb;i<ub;i++)
	{
	perfect(i);
	}
	return 0;
}
