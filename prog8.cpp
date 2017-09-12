#include <iostream>
#include <cmath>
using namespace std;

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
	cout<<"\n "<<p;
	
}
int main() {
	int x,cj,count,lb,ub;
	cout<<"enter the lower bound and upper bound of the range\n";
	cin>>lb>>ub;
	cout<<"\n the armstrong numbers between the given range are \n";
	for(int i=lb;i<ub;i++)
	{
		cj=i;
		count=0;
		while(x != 0)
		    {
			x /= 10;
			++count;
			}

	armstrong(cj,count);
	}
	return 0;
}