
#include <iostream>
//using namespace std;

int main()
{
	//objects of int data type
	{
		int no1,  no2;
		std::cout<<"Enter No1 ::";
		//std::cin>>&no1;  //error
		std::cin>>no1;

		std::cout<<"Enter no2 :: ";
		std::cin>>no2;

		std::cout<<" no1 :: "<<no1<<" &no1 :: "<<&no1<<"\n";
		std::cout<<" no2 :: "<<no2<<" &no1 :: "<<&no2<<std::endl;

	}
	using namespace std;
	{
		float no1, no2;
		cout<<"Enter No1:: ";
		cin>>no1;
		cout<<"Enter No2:: ";
		cin>>no2;

		cout<<" no1="<<no1<<" &no1="<<&no1<<endl;
		cout<<" no2="<<no2<<" &no2="<<&no2<<endl;

	}
	return 0;
}
