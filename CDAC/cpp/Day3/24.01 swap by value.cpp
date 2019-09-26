#include <iostream>
using namespace std;
void swap(int n1, int n2); // 1. call by value
int main()
{
	int no1=10, no2=20;
	cout<<" before swap in main no1="<<no1<<" ["<<&no1<<" ] no2="<<no2<<" ["<<&no2<<" ]"<<endl;
	swap(no1, no2); // 1. call by value
	// no1 and no2 actual arguments
	cout<<" after swap in main no1="<<no1<<" ["<<&no1<<" ] no2="<<no2<<" ["<<&no2<<" ]"<<endl;
	return 0;
}
// 1. call by value
// n1 and n2 are formal arguments
void swap(int n1, int n2)
{
	int temp=0;
	cout<<" before swap in swap n1="<<n1<<" [ "<<&n1<<"] n2="<<n2<<" [ "<< &n2<<" ]"<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<" after swap in swap n1="<<n1<<" [ "<<&n1<<"] n2="<<n2<<" [ "<< &n2<<" ]"<<endl;
}

