#include <iostream>
using namespace std;

void cube(float a)
{
	double c;
	c=a*a*a;
	cout<<"the cube is\t"<<c;
}
int main() {
	float a;
	cout<<"enter the number";
	cin>>a;
	cube(a);
	
	return 0;
}