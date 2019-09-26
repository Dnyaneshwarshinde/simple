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
	//explicit Complex( int value )
	 Complex( int value )
	{
		cout<<"Complex( int value )"<<endl;
		this->real = value;
		this->imag = value;
	}
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
	//const Complex &other = c1
	//Complex *const this = &c2;
	Complex& operator=( const Complex &other )
	{
		cout<<"void operator=( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	operator int (void )
	{
		return this->real;
	}
	friend ostream& operator<<( ostream &cout, const Complex &other );
};
ostream& operator<<( ostream &cout, const Complex &other )
{
	cout<<"Real Number	:	"<<other.real<<endl;
	cout<<"Imag Number	:	"<<other.imag<<endl;
	return cout;
}
int main( void )
{
	Complex c1(10,20);
	int real = c1;
	//int real = c1.operator int( );
	cout<<"Real	:	"<<real<<endl;
	return 0;
}
int main2( void )
{
	int number = 10;
	Complex c1;
	c1 = number;	//c1 = Complex(number);

	//c1.operator=( Complex( number) );
	cout<<c1;
	return 0;
}
int main1( void )
{
	int number = 10;
	//Complex c1 = number;	//Complex c1( number );
	//cout<<c1;
	return 0;
}
