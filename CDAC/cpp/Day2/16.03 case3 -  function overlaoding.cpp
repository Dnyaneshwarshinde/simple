#include <iostream>
using namespace std;
//case3 : Function having same name ,same number of arguments but order
//of arguments are different
float sum(int n1,float n2) // sum@@int, float
{
	return n1+n2;
}
float sum(float n1,int n2) // sum@@ float,int
{
	return n1+n2;
}
int main()
{
	float result=0;
	result= sum(10, 20.2f); // sum@@int, float
	cout<<"result="<<result<<endl;

	result= sum(10.5, 20); // sum@@ float, int
	cout<<"result="<<result<<endl;

	return 0;
}
