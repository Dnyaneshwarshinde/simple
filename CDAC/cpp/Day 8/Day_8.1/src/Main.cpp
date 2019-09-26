#include<iostream>
using namespace std;

class
{
public:
	void print( void )
	{
		cout<<"void print( void )"<<endl;
	}
	static void display( void )
	{
		cout<<"static void display( void )"<<endl;
	}
}t1;

int main( void )
{
	t1.print();
	t1.display();
	return 0;
}
