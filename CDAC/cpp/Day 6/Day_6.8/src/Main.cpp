#include<cstring>
#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	//Complex *const this = &c2;
	//Complex &other = c1
	Complex( const Complex &other )	//Copy ctor
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
	//Complex *const this = &c2;
	//Complex &other = c1
	/*Complex( const Complex &other )	: real( other.real ), imag( other.imag )
	{
		cout<<"Complex( const Complex &other )"<<endl;
	}*/
	//Complex *const this = &c2;
	//Complex &other = c1
	/*Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		memcpy(this, &other, sizeof( Complex));
	}*/
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	//Complex *const this = &c1
	//Complex other = c2
	Complex sum( Complex other )
	{
		Complex temp;
		temp.real = this->real + other.real;
		temp.imag = this->imag + other.imag;
		return temp;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	//Complex c1;	//Here On c1 object parameterless ctor will call
	//Complex *ptr = &c1;	//Since ptr is pointer, compiler will not call ctor on it.


	//Complex c1(10,20);//Here On c1 object parameterized ctor will call
	//Complex &c2 = c1;//Since c2 is reference, compiler will not call ctor on it.

	//Complex c1(10,20);//Here On c1 object parameterized ctor will call
	//Complex c2;//Here On c2 object parameterless ctor will call
	//c2 = c1;//c2.operator=( c1 )

	Complex c1(10,20);//Here On c1 object parameterized ctor will call
	Complex c2 = c1;//Here On c2 object Copy ctor will call
	Complex c3( c1 );//Here On c3 object Copy ctor will call

}
int main2( void )
{
	Complex c1( 10, 20 );
	Complex c2 = c1;	//On c2, Copy constructor will call
	c2.printRecord();
}
int main1( void )
{
	Complex c1(10,20);
	Complex c2(30,40);
	Complex c3;
	c3 = c1.sum( c2 );	//c1.sum( &c1, c2` )
	c3.printRecord();
	return 0;
}
