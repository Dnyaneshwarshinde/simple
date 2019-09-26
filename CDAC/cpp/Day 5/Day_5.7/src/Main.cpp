#include<iostream>
using namespace std;

namespace ntest
{
	class Test
	{
	private:
		int num1;
		int num2;
	public:
		Test( void )
		{
			this->num1 = 10;
			this->num2 = 20;
		}
		friend void print( void );
	};//end of class
	void print( void )
	{
		Test t;
		cout<<"Num1	:	"<<t.num1<<endl;
		cout<<"Num2	:	"<<t.num2<<endl;
	}
}//end of namespace
int main( void )
{
	ntest::print();
	return 0;
}
