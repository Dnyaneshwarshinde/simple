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
	void acceptRecord( void )
	{
		cout<<"Real Number	:	";
		cin>>this->real;
		cout<<"Imag Number	:	";
		cin>>this->imag;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex **arr = new Complex*[ 3 ];
	for( int index = 0; index < 3; ++ index )
	{
		int real;
		cout<<"Enter real number	:	";
		cin>>real;
		int imag;
		cout<<"Enter imag number	:	";
		cin>>imag;
		arr[ index ] = new Complex( real, imag );
	}

	for( int index = 0; index < 3; ++ index )
		arr[ index ]->printRecord();

	for( int index = 0; index < 3; ++ index )
		delete arr[ index ];
	delete[] arr;
	arr = NULL;
	return 0;
}
int main7( void )
{
	Complex arr[ 3 ] = { Complex(10,20), Complex(30,40), Complex(50,60) };
	for( int index = 0; index < 3; ++ index )
		arr[ index ].printRecord();
	return 0;
}
int main6( void )
{
	Complex *arr = new Complex[ 3 ];
	for( int index = 0; index < 3; ++ index )
		arr[ index ].acceptRecord();

	for( int index = 0; index < 3; ++ index )
		arr[ index ].printRecord();

	delete[] arr;
	arr = NULL;
	return 0;
}
int main5( void )
{
	Complex arr[ 3 ];
	for( int index = 0; index < 3; ++ index )
		arr[ index ].acceptRecord();

	for( int index = 0; index < 3; ++ index )
		arr[ index ].printRecord();
	return 0;
}
int main4( void )
{
	Complex *ptr = new Complex( 10, 20 );
	ptr->printRecord();
	delete ptr;
	ptr = NULL;
	return 0;
}
int main3( void )
{
	Complex c1(10,20);
	c1.printRecord();
	return 0;
}
int main2( void )
{
	//Complex *ptr = new Complex;	//Ok
	Complex *ptr = new Complex();	//Ok : Recommended
	ptr->acceptRecord();
	ptr->printRecord();
	delete ptr;
	ptr = NULL;
	return 0;
}
int main1( void )
{
	Complex c1;
	c1.printRecord();
	return 0;
}
