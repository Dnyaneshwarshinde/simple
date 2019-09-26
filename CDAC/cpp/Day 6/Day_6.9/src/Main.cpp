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
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
public:
	Complex( const Complex &other )	//Copy ctor
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
public:
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
	//ostream out =  cout;	//Not OK
	//ostream &out =  cout;	//Ok

	//istream in = cin;	//Not OK
	istream &in = cin;	//OK

	return 0;
}
