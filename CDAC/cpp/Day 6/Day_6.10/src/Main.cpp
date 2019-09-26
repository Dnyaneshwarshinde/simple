#include<iostream>
using namespace std;
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
	//Array *const this = &a2
	//const Array &other = a1
	Array( const Array &other )
	{
		//Step No.1 : Copy the required size
		this->size = other.size;
		//Step No.2 : allocate new resource to dest object
		this->arr = new int[ this->size ];
		//Step No.3 : Copy the contents from resc. of src into dest
		for( int index = 0; index < this->size; ++ index )
			this->arr[ index ] = other.arr[ index ];
	}
	//Array *const this = &a1;
	void acceptRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	//Array *const this = &a1;
	void printRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
	~Array( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
int main( void )
{
	Array a1(3);
	a1.acceptRecord( );
	Array a2 = a1;//Here on a2 object, default copy ctor will call
	a1.printRecord( );
	return 0;
}
