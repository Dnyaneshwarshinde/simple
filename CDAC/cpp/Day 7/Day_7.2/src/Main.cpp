#include<string>
#include<iostream>
#include<memory.h>
using namespace std;
class Exception
{
private:
	string message;
public:
	Exception( string message )
	{
		this->message = message;
	}
	string getMessage( void )
	{
		return this->message;
	}
};


class Array
{
private:
	int size;
	int *arr;
public:
	Array( void )
	{
		this->size = 0;
		this->arr = NULL;
	}
	Array( int size )
	{
		this->size = size;
		this->arr = new int[ this->size ];
	}
	Array( const Array &other )
	{
		this->size = other.size;
		this->arr = new int[ this->size ];
		memcpy(this->arr, other.arr, this->size * sizeof( int ) );
	}
	//Array *const this = &a1;
	int& operator[]( int index )
	{
		if( index >= 0 && index < size )
			return this->arr[ index ];
		throw Exception("Array index out of bounds exception");
	}
	~Array( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
	friend istream& operator>>( istream &cin, Array &other );
	friend ostream& operator<<( ostream &cout, const Array &other );
};
istream& operator>>( istream &cin, Array &other )
{
	for( int index = 0; index < other.size; ++ index )
	{
		cout<<"Enter element	:	";
		cin>>other.arr[ index ];
	}
	return cin;
}
ostream& operator<<( ostream &cout, const Array &other )
{
	for( int index = 0; index < other.size; ++ index )
	{
		cout<<other.arr[ index ]<<endl;
	}
	return cout;
}
int main1( void )
{
	Array a1(3);
	cin>>a1;	//operator>>( cin, a1 );
	cout<<a1;	//operatot<<( cout, a1 );
	return 0;
}
int main2( void )
{
	Array a1;
	a1[ 1 ] = 200;	//a1.operator [](1) = 200;
	int element = a1[ 1 ];//200
	cout<<element<<endl;
	return 0;
}
int main( void )
{
	Array a1;
	int element = a1[ 1 ];//element = a1.operator[]( 2 );
	cout<<element<<endl;
	return 0;
}
