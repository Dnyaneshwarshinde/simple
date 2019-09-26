#include<iostream>
using namespace std;
int main( void )
{
	class Complex	//Local Class
	{
	private:
		int real, imag;
	public:
		Complex( void ) : real( 10 ), imag( 20 )
		{	}
		void printRecord( void )
		{
			cout<<this->real<<"	"<<this->imag<<endl;
		}
	};
	Complex c1;
	c1.printRecord();
	return 0;
}
