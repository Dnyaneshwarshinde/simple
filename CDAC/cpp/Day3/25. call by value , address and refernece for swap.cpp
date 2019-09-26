#include <iostream>
using namespace std;
//void swap(int n1, int n2); // 1. call by value
void swap(int *n1, int *n2); // 2. call by address (using pointers)
void swap(int &n1, int &n2); // 3. call by reference
int main()
{
	int no1=10, no2=20;
	/*cout<<"call by value :: "<<endl;
	{
		cout<<" before swap in main no1="<<no1<<" ["<<&no1<<" ] no2="<<no2<<" ["<<&no2<<" ]"<<endl;
		swap(no1, no2); // 1. call by value
		// no1 and no2 actual arguments
		cout<<" after swap in main no1="<<no1<<" ["<<&no1<<" ] no2="<<no2<<" ["<<&no2<<" ]"<<endl;
	}
	cout<<"=========================================="<<endl;
	*/
	cout<<"call by address "<<endl;
	{
		cout<<" before swap in main no1="<<no1<<" ["<<&no1<<" ] no2="<<no2<<" ["<<&no2<<" ]"<<endl;
		swap(&no1, &no2); // 2. call by address
		// no1 and no2 actual arguments
		cout<<" after swap in main no1="<<no1<<" ["<<&no1<<" ] no2="<<no2<<" ["<<&no2<<" ]"<<endl;
	}
	cout<<"=========================================="<<endl;
	cout<<"call by reference "<<endl;
	{

		cout<<" before swap in main no1="<<no1<<" ["<<&no1<<" ] no2="<<no2<<" ["<<&no2<<" ]"<<endl;
		swap(no1, no2); // 3. call by reference
		// no1 and no2 actual arguments
		cout<<" after swap in main no1="<<no1<<" ["<<&no1<<" ] no2="<<no2<<" ["<<&no2<<" ]"<<endl;
	}
	cout<<"=========================================="<<endl;

	return 0;
}
// 1. call by value
// n1 and n2 are formal arguments
/*void swap(int n1, int n2)
{
	int temp=0;
	cout<<" before swap in swap n1="<<n1<<" [ "<<&n1<<"] n2="<<n2<<" [ "<< &n2<<" ]"<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<" after swap in swap n1="<<n1<<" [ "<<&n1<<"] n2="<<n2<<" [ "<< &n2<<" ]"<<endl;
}*/

// 2. call by address
// n1 and n2 are formal arguments are pointers to collect address of actual arguments
void swap(int *n1, int *n2)
{
	int temp=0;
	cout<<" before swap in swap *n1="<<*n1<<" n1=[ "<<n1<<"] *n2="<<*n2<<" n2=[ "<< n2<<" ]"<<endl;
	temp=*n1;
	*n1=*n2;
	*n2=temp; // using pointers (n1 n2 ) formal arguments
	          // we are modify atcual arguments no1 no2
	cout<<" after swap in swap *n1="<<*n1<<" n1=[ "<<n1<<"] *n2="<<*n2<<" n2=[ "<< n2<<" ]"<<endl;
}

// 3. call by reference
// n1 is reference of no1 , n2 is reference of no2
void swap(int &n1, int &n2)
{
	int temp=0;
	cout<<" before swap in swap n1="<<n1<<" [ "<<&n1<<"] n2="<<n2<<" [ "<< &n2<<" ]"<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<" after swap in swap n1="<<n1<<" [ "<<&n1<<"] n2="<<n2<<" [ "<< &n2<<" ]"<<endl;
}

