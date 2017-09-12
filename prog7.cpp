#include <iostream>
using namespace std;

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
	cout<<"\n"<<p;
	
	
}
int main() {
	int x,cj,count,lb,ub;
	cout<<"enter the lower bound and upper bound of the range\n";
	cin>>lb>>ub;
	cout<<"\n the strong numbers between the given range are \n";
	for(int i=lb;i<ub;i++)
	{
		cj=i;
		count=0;
		while(x != 0)
		    {
			x /= 10;
			++count;
			}

	strong(cj,count);
	}
	return 0;
}