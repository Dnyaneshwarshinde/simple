#include<string>
#include<iostream>
using namespace std;
template<class A, class B>	//T --> Type Parameter
void swap_object( A &x, B &y )
{
	A temp = x;
	x = y;
	y = temp;
}
int main( void )
{
	float a = 10.1f;
	double b = 20.2;
	swap_object<float, double>( a, b );//<float, double> -->Template argument list
	cout<<"A	:	"<<a<<endl;
	cout<<"B	:	"<<b<<endl;
	return 0;
}
