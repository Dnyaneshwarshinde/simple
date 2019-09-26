#include <iostream>
using namespace std;
//2 data type are added in cpp
//1. bool -- 1 byte (store true and false value)
//2/ wchar_t-2 byte (16 bit char) unicode
     // chae - 1 byte( 8 bit) ascii

/*int f1(int) // f1@@int
{
	cout<<"inside int block with return int"<<endl;
}*/ //error

void f1(int) //f1@@int
{
	cout<<"inside int block"<<endl;
}
void f1(float) // f1@@float
{
	cout<<"inside float block"<<endl;
}
void f1(double) // f1@@double
{
	cout<<"inside double block"<<endl;
}
void f1(char) // f1@@char
{
	cout<<"inside char block"<<endl;
}
void f1(char*) // f1@@char*
{
	cout<<"inside char*(string) block"<<endl;
}
void f1(void) // f1@@void
{
	cout<<"inside no argument block"<<endl;
}
void f1(bool) // f1@@bool
{
	cout<<"inside bool block"<<endl;
}

int main()
{
	f1(11); // inside int block
	f1(10.1f);// inside float block
	f1(10.1F);// inside float block
	f1(10.1);// inside double block
	f1((int)10.1);// inside int block
	f1((float)10.1);// inside float block
	f1('A');	// inside char block
	f1("Sunbeam");	// inside char*(string) block
	f1();// inside no argument block
	f1(true); //inside bool block
	f1(false); //inside bool block
	return 0;
}
