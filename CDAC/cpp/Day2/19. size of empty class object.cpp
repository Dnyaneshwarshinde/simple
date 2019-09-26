
#include <iostream>
using namespace std;
#pragma pack(1)

namespace NEmpty
{
	class Empty
	{

	}; //end of empty class
	struct empty
	{

	}; //end of empty structure
}
using namespace NEmpty;
int main()
{
	Empty e1;
	cout<<"size of empty class object e1="<<sizeof(e1)<<endl;;
	cout<<"size of empty class object="<<sizeof(Empty)<<endl;
	empty e2;
	cout<<"size of empty struct object e2="<<sizeof(e2)<<endl;
	cout<<"size of empty struct obejct ="<<sizeof(empty)<<endl;

	cout<<"&e1="<<&e1<<endl;
	cout<<"&e2="<<&e2<<endl;

	//cout<<"&Empty="<<&Empty<<endl;  //error
	//cout<<"&empty="<<&empty<<endl;  //error

	return 0;
}
