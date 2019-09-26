
#include <iostream>
using namespace std;

namespace NConstDemo
{
	class ConstDemo
	{
		private:
			//variables or data members or fields
			const int a;
			const int b;
			//const int a=10; cpp 11 std
			int c;
			mutable int d;
		public:
			// ctor init list
			ConstDemo():a(10), b(20),c(30),d(40)
			{
				//this->a=10;  //error as a and b are const data member
				//this->b=20;
				//this->c=30; // allowed for c and d as they are non const data member
				//this->d=40;
			}
			ConstDemo(int a, int b, int c, int d):a(a), b(b),c(c), d(d)
			{

			}
			// if member fun is constant we can not change the
			//state of object only in that constant member fun
			//void Print( const className * const this)
			//void Print(const ConstDemo * const this)
			void Print() const
			{
				//this->a=11; // error as a and b are const data member
				//this->b=22; //
				//this->c=33; // for c   -->error as print is constant member fun
				this->d=44;// allowed as d is mutable data member
				cout<<" this->a ="<< this->a<<"\t["<< &this->a<<" ]"<<endl;
				cout<<" this->b ="<< this->b<<"\t["<< &this->b<<" ]"<<endl;
				cout<<" this->c ="<< this->c<<"\t["<< &this->c<<" ]"<<endl;
				cout<<" this->d ="<< this->d<<"\t["<< &this->d<<" ]"<<endl;
			}

			// non constant function
			// we can change state of object in non constant member function
			//void Display(className * const this)
			//void Display(ConstDemo * const this)
			void Display()
			{
				//this->a=11; //error as a and b are const data member
				//this->b=22;

				this->c=33;  // allowed as c and d are non const data member
				this->d=44;

				cout<<" this->a ="<< this->a<<"\t["<< &this->a<<" ]"<<endl;
				cout<<" this->b ="<< this->b<<"\t["<< &this->b<<" ]"<<endl;
				cout<<" this->c ="<< this->c<<"\t["<< &this->c<<" ]"<<endl;
				cout<<" this->d ="<< this->d<<"\t["<< &this->d<<" ]"<<endl;
			}


	};//end of ConstDemo class

}//end of name space NConstDemo
using namespace NConstDemo;
int main()
{
	// non const object c1, c2 can call both type of member fun
	//1. non const member fun (Display)
	//2. const member fun (Print)

	ConstDemo c1;  // parameterless ctor
	cout<<"c1 :: using Print fun"<<endl;
	c1.Print();
	cout<<"============================"<<endl;
	cout<<"c1 :: using Display fun"<<endl;
	c1.Display();


	cout<<"size of c1="<<sizeof(c1)<<endl;

	ConstDemo c2(100,200,300,400); // parameterized ctor
	cout<<"c2 :: using Print fun  "<<endl;
	c2.Print();
	cout<<"==============================="<<endl;
	cout<<"c2 :: using Display fun  "<<endl;
	c2.Display();

	cout<<"size of c2="<<sizeof(c2)<<endl;

	// const object c3 can call constant member function
	//as type of this pointer is same
	// Print Fun ---> const classname * const this 
	// c3 ----------> const ConstDemo * const this
	const ConstDemo c3;
	cout<<"c3 :: using Print fun "<<endl;
	c3.Print();
	cout<<"size of c3="<<sizeof(c3)<<endl;

	cout<<"========================"<<endl;
	cout<<"c3 using Display function "<<endl;
	//c3.Display(); //error
	//const object can not call non constant member fun as
	//their type of this is differrent
	//Display --->> ConstDemo * const this
	//c3 ---> const ConstDemo * const this


	return 0;
}
