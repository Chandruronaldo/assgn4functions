#include <iostream>
using namespace std;

void evod(int a)
{
	if(a%2==0)
	cout<<"\nthe no. is even";
	else
	cout<<"\n the no. is odd";
}

int main() {
	int b;
	cout<<"enter the no.";
	cin>>b;
	evod(b);
	return 0;
}