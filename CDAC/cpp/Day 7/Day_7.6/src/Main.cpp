#include<string>
#include<iostream>
using namespace std;

//template<typename T>	//T --> Type Parameter
template<class T>	//T --> Type Parameter
void swap_object( T &x, T &y )
{
	T temp = x;
	x = y;
	y = temp;
}
int main( void )
{
	int a = 10;
	int b = 20;
	//swap_object<int>( a, b );	//int --> Type Argument
	swap_object( a, b );	//int --> Type Argument
	cout<<"A	:	"<<a<<endl;
	cout<<"B	:	"<<b<<endl;
	return 0;
}
