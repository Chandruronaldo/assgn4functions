#include <iostream>
using namespace std;
void circle(float a)
{
	cout<<"\nthe diameter is\t"<<2*a<<"\nthe circumference is\t"<<2*3.14*a<<"\nthe area is\t"<<3.14*a*a;
}
int main() {
	float a;
	cout<<"enter the radius of the circle";
	cin>>a;
	circle(a);
	return 0;
}