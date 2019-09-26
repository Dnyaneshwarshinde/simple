
#include <iostream>
using namespace std;
//case 2 :Function having same name and same number of arguments but
//differs in type of arguments

int sum(int n1,int n2) // sum@@int,int
{
	return n1+n2;
}
float sum(int n1,float n2) // sum@@int,float
{
	return n1+n2;
}


int main()
{
	int result=0;
	result= sum(10,20); // sum@@int, int
	cout<<"result="<<result<<endl;

	float result1=0;
	result1= sum(10,20.2f); // sum@@int,float
	cout<<"result1="<<result1<<endl;

	return 0;
}
