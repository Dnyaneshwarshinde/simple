#include <iostream>
using namespace std;
#define sq(a) a*a // arguement are not type safe
#define sq1(a) (a)*(a)
inline int square(int a); // arguments are type safe
int main()
{
	int x=5, y=0;
	y=sq(x); // y=x*x; // y=5*5; y=25;
	cout<<"using macro x = "<<x<<"\t y="<<y<<endl;

	y= sq(x+x);// y=x+x*x+x; // y=5+5*5+5;//y=5+25+5; // y=35;
	cout<<"using macro x = "<<x<<"\t y="<<y<<endl;


	y= sq1(x+x);// y=(x+x)*(x+x); // y=(5+5)*(5+5);//y=(10)*(10); // y=100;
	cout<<"using macro x = "<<x<<"\t y="<<y<<endl;

	y= 25/sq(x); // y=25/x*x; // y=25/5*5;// y=5*5;//y=25;
	cout<<"using macro x = "<<x<<"\t y="<<y<<endl;

	//y= square(x); y=  x*x;
	cout<<"using function x = "<<x<<"\t y="<<y<<endl;
	return 0;
}
inline int square(int a)
{
	return a*a;
}

// to create .i file
//g++ -E -o Demo6.i Demo6.cpp

