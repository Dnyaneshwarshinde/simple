#include<iostream>
using namespace std;

class Singleton
{
private:
	int number;
	Singleton( void )//constructor
	{
		this->number = 0;
	}
private:
	Singleton( const Singleton &other )	//Copy Constructor
	{
		this->number = other.number;
	}
public:
	int getNumber( void )
	{
		return this->number;
	}
	void setNumber( int number )
	{
		this->number = number;
	}
	static Singleton& getInstance( void )//Factory Method
	{
		static Singleton instance;
		return instance;
	}
};
int main( void )
{
	Singleton &s1 =  Singleton::getInstance();
	s1.setNumber(100);
	cout<<"Number	:	"<<s1.getNumber()<<endl;
	return 0;
}
