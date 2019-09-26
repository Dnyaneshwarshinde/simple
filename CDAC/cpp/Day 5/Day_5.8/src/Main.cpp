#include<iostream>
using namespace std;
class Outer	//Top-Level class
{
private:
	int num1;
public:
	Outer( void )
	{
		this->num1 = 10;
	}
public:
	class Inner	//Nested class
	{
	private:
		int num2;
	public:
		Inner( void )
		{
			this->num2 = 20;
		}
		friend class Outer;
	};
public:
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		Inner in;
		cout<<"Num2	:	"<<in.num2<<endl;
	}
};
int main( void )
{
	Outer out;
	out.printRecord();
	return 0;
}
