
#include <iostream>
using namespace std;

namespace NPoint
{
	class Point
	{
		private:
			int x;
			int y;
		public:
			Point()
			{
				this->x=100;
				this->y=200;
				cout<<"inside parameterless ctor"<<endl;
			}
			Point(int value)
			{
				this->x=value;
				this->y=value;
				cout<<"inside parameterized ctor with 1 argument"<<endl;
			}
			Point(int x, int y)
			{
				this->x=x;
				this->y=y;
				cout<<"inside parameterized ctor with 2 argument"<<endl;
			}
			void Print()
			{
				cout<<"this->x::"<<this->x<<endl;
				cout<<"this->y::"<<this->y<<endl;
			}

	}; //end of class Point
}//end of name space NPoint
using namespace NPoint;
int main()
{
	Point p1; // parameterless  x=100 y=200
	cout<<"p1 :: "<<endl;
	p1.Print();
	cout<<"======================================"<<endl;

	Point p2(50); // parameterized with 1 arguments
	              // x=50 y=50
	cout<<"p2 :: "<<endl;
	p2.Print();
	cout<<"======================================"<<endl;

	Point p3(11,22); // parmeterized with 2 arguments
	                  //x=11 y=22
	cout<<"p3 :: "<<endl;
	p3.Print();
	cout<<"======================================"<<endl;

	Point p4(); // p4 function decl whose return type is Point
	cout<<"======================================"<<endl;

	Point p5;// parameterless ctor x=100 y=200
	Point *ptr=&p5; // pointer store address of object p5 so ctor will not called for ptr
	cout<<"p5 :: "<<endl;
	p5.Print();
	cout<<"ptr :: "<<endl;
	ptr->Print();

	cout<<"======================================"<<endl;

	Point p6;// parameterless ctor x=100 y=200
	Point &r1=p6; // r1 is reference for p6 so ctor will not called for r1
	cout<<"p6 :: "<<endl;
	p6.Print();
	cout<<"r1 :: "<<endl;
	r1.Print();
	cout<<"======================================"<<endl;

	Point p7=(1,2,3); //one arguments ctor
	                   // x=3  y=3
	cout<<"p7 :: "<<endl;
	p7.Print();
	cout<<"======================================"<<endl;

	//Point p8=1,2,3; //error as obejct name can not start with digits
	                  // x=3  y=3
	//cout<<"p8 :: "<<endl;
	//p8.Print();





	return 0;
}
