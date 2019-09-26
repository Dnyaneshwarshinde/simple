#include<cstring>
#include<iostream>
using namespace std;
class String
{
private:
	size_t length;
	char *buffer;
public:
	String( void )
	{
		this->length = 0;
		this->buffer = NULL;
	}
	string( int length )
	{
		this->length = length;
		this->buffer = new char[ this->length + 1 ];
	}
	String( const char *str )
	{
		this->length = strlen( str );
		this->buffer = new char[ this->length + 1 ];
		strcpy(this->buffer, str);
	}
	void acceptRecord( void )
	{
		cout<<"Enter name	:	";
		cin>>this->buffer;
	}
	void printRecord( void )
	{
		if( this->buffer != NULL )
			cout<<"Name	:	"<<this->buffer<<endl;
	}
	~String( void )
	{
		if( this->buffer != NULL )
		{
			delete[] this->buffer;
			this->buffer = NULL;
		}
	}
};
int main( void )
{
	//String s1(10);
	//s1.acceptRecord( );

	String s1("SunBeam");
	s1.printRecord( );
	return 0;
}
