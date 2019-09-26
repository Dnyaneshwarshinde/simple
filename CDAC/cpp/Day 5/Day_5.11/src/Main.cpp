#include<iostream>
using namespace std;

#define size	3
class Array
{
private:
	int arr[ size ];
public:
	void acceptRecord( void )
	{
		for( int index = 0; index < size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	void printRecord( void )
	{
		for( int index = 0; index < size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
};
int main( void )
{
	Array obj;
	obj.acceptRecord( );
	obj.printRecord( );
	return 0;
}
