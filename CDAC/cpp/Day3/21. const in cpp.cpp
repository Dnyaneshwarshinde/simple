#include <iostream>
using namespace std;
int main()
{
	const float pi=3.142f;
	//float *ptr=&pi; //error not allowed to stroe as value of pointer is not constant in cpp
	//float const *ptr=&pi
	const float *ptr=&pi; // allowed to stored as value of pointer is constant

	cout<<" pi="<<pi<<endl;
	cout<<" *ptr="<<*ptr<<endl;

	//pi=3.14f; // not allowed as pi  is constant
	//*ptr=3.14f; //not allowed as value of ptr is constant
	cout<<" pi="<<pi<<endl;
	cout<<" *ptr="<<*ptr<<endl;



	return 0;
}
