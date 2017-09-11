#include <iostream>
using namespace std;

void max(int a, int b)
{   int m;
	m= (a > b ) ? a : b;
	cout<<"the maximum is \t"<<m;
}
void min(int a, int b)
{
	int m;
	m= (a > b) ? b : a;
	cout<<"the minimum is \t"<<m;
}



int main() 
{
    int a, b;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    max(a,b);  
    min(a, b);  
    return 0;
}


