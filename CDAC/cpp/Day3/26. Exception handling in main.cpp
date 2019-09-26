#include <iostream>
using namespace std;
int main()
{
	int x=10, y=0, result=0;

	try
	{
		if(y==0)
		{
			throw 1;
			//throw 'A';
			//throw true;
			//throw 1.3f;
			//throw 1.2;
			//throw 1; // int
		}
		else
		{
			result=x/y;
			cout<<"result ="<<result<<endl;
		}
	}
	catch(char no)
	{
		cout<<"inside char catch no= "<<no<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(int no)
	{
		cout<<"inside int catch1 no= "<<no<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(int no)
	{
		cout<<"inside int catch2 no= "<<no<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(float no)
	{
		cout<<"inside float catch no= "<<no<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(double no)
	{
		cout<<"inside double catch no= "<<no<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(bool no)
	{
		cout<<"inside bool catch no= "<<no<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(...) // generic catch
	{
		cout<<"inside generic catch  "<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	return 0;
}
