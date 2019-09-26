#include<string>
#include"../include/Array.h"

int main( void )
{
	Array<string> a1( 3 );
	a1.acceptRecord();
	a1.printRecord();
	return 0;
}
