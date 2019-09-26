#include<iostream>
using namespace std;
namespace N1
{
		int no1=500;
		int no2=600;

		namespace N2
		{
			int no1=1000;
			int no3=1500;
		} //end of namespace N2

} //end of namespace N1

int no1=100; // global variable
using namespace N1;
using namespace N1::N2;

int main()
{
	int no1=10;
	cout<<" no1="<<no1<<"\t &no1 =["<< &no1<<" ] local variable"<<endl;
	cout<<" ::no1="<<::no1<<"\t &::no1 =["<< &::no1<<" ] global variable"<<endl;
	cout<<"====================="<<endl;

	cout<<"N1::no1="<<N1::no1<<"\t &N1::no1= ["<<&N1::no1<<" ] variable from N1 namespace"<<endl;
	cout<<"N1::no2="<<N1::no2<<"\t &N1::no2= ["<<&N1::no2<<" ] variable from N1 namespace"<<endl;
	cout<<"====================="<<endl;
	//using namespace N1;
	cout<<"no2="<<no2<< " &no2=["<< &no2<<"] variable from N1 namespace "<<endl;
	cout<<"no1="<<no1<< " &no1=["<< &no1<<"] local variable  "<<endl;
	cout<<"====================="<<endl;

	cout<<" N1::N2::no1 ="<<N1::N2::no1<<" \t &N1::N2::no1=["<< &N1::N2::no1<<"] variable from N1::N2 namespace"<<endl;
	cout<<" N1::N2::no3 ="<<N1::N2::no3<<" \t &N1::N2::no3=["<< &N1::N2::no3<<"] variable from N1::N2 namespace"<<endl;
	cout<<"====================="<<endl;
	//using namespace N1::N2;
	//or
	//using namespace N1;
	//using namespace N2;
	cout<<"no3="<<no3<<" &no3=["<<&no3<<"] variable from N1::N2 namespace"<<endl;
	cout<<"no1="<<no1<<" &no1=["<<&no1<<"] local variable "<<endl;
	return 0;
}
