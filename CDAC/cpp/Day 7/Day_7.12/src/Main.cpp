#include<iostream>
using namespace std;


void print( void )
{
	static int count;
	++ count;
	cout<<"Count	:	"<<count<<endl;
}
int main( void )
{
	print();	//1
	print();	//2
	print();	//3
	return 0;
}
