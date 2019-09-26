
#include <iostream>
using namespace std;
int main()
{
	// we can create a reference to objects (a)
	int a=10;
	int &r=a; // r is a reference of a
	//int * const r=&a;
	cout<<"a ="<<a<<"\t &a=["<<&a<<" ]"<<endl;
	cout<<"r ="<<r<<"\t &r=["<<&r<<" ]"<<endl;
	cout<<"============================="<<endl;
	a=100;
	cout<<"a ="<<a<<"\t &a=["<<&a<<" ]"<<endl;
	cout<<"r ="<<r<<"\t &r=["<<&r<<" ]"<<endl;
	cout<<"============================="<<endl;
	r=1000;
	cout<<"a ="<<a<<"\t &a=["<<&a<<" ]"<<endl;
	cout<<"r ="<<r<<"\t &r=["<<&r<<" ]"<<endl;
	cout<<"============================="<<endl;
	++r;
	cout<<"a ="<<a<<"\t &a=["<<&a<<" ]"<<endl;
	cout<<"r ="<<r<<"\t &r=["<<&r<<" ]"<<endl;
	cout<<"============================="<<endl;
	++a;
	cout<<"a ="<<a<<"\t &a=["<<&a<<" ]"<<endl;
	cout<<"r ="<<r<<"\t &r=["<<&r<<" ]"<<endl;
	cout<<"============================="<<endl;

	r=NULL; // we can assign NULL to reference
	cout<<"a ="<<a<<"\t &a=["<<&a<<" ]"<<endl;
	cout<<"r ="<<r<<"\t &r=["<<&r<<" ]"<<endl;
	cout<<"============================="<<endl;

	{
		//we can not create a reference to constant
		//int &r1=100;
	}
	{
		int a1=150;
		const int &r1=a1;
		//const  int * const r1= &a1
		cout<<"a1 ="<<a1<<"\t &a1=["<<&a1<<" ]"<<endl;
		cout<<"r1 ="<<r1<<"\t &r1=["<<&r1<<" ]"<<endl;
		cout<<"============================="<<endl;

		a1=200;
		cout<<"a1 ="<<a1<<"\t &a1=["<<&a1<<" ]"<<endl;
		cout<<"r1 ="<<r1<<"\t &r1=["<<&r1<<" ]"<<endl;
		cout<<"============================="<<endl;
		//r1=300; as r1 const
		cout<<"a1 ="<<a1<<"\t &a1=["<<&a1<<" ]"<<endl;
		cout<<"r1 ="<<r1<<"\t &r1=["<<&r1<<" ]"<<endl;
		cout<<"============================="<<endl;

	}
	{
		const int a2=500;
		const int &r2=a2;
		// const int * const r2=&a2;
		cout<<"a2 ="<<a2<<"\t &a1=["<<&a2<<" ]"<<endl;
		cout<<"r2 ="<<r2<<"\t &r1=["<<&r2<<" ]"<<endl;
		cout<<"============================="<<endl;

		//a2=600; // error as a is const
		//r2=700; //error as r is const


	}
	return 0;
}
