#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void print( void )
{
	int x = 0;
	++ x;
	cout<<"X	:	"<<x<<endl;
}
int main( void )
{
	print();	//1
	print();	//1
	print();	//1
	return 0;
}

int main2( void )
{
	queue<double> que;
	que.push(10.1);
	que.push(20.2);
	que.push(30.3);
	double element = 0;
	while( !que.empty( ) )
	{
		element = que.front();
		cout<<"Popped element is : "<<element<<endl;
		que.pop();
	}
	return 0;
}

int main1( void )
{
	stack<int> stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);

	int element = 0;
	while( !stk.empty( ) )
	{
		element = stk.top();
		cout<<"Popped element is : "<<element<<endl;
		stk.pop();
	}
	return 0;
}
