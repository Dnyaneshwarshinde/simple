#include<iostream>
#include<string>
using namespace std;

class StackOverflowException
{
	string message;
public:
	StackOverflowException( string message )
	{
		this->message = message;
	}
	string getMessage( void )
	{
		return this->message;
	}
};
class StackUnderflowException
{
	string message;
public:
	StackUnderflowException( string message )
	{
		this->message = message;
	}
	string getMessage( void )
	{
		return this->message;
	}
};

class Stack
{
private:
	int top;
	int size;
	int *arr;
public:
	Stack( void )
	{
		this->top = -1;
		this->size = 0;
		this->arr = NULL;
	}
	Stack( int size )
	{
		this->top = -1;
		this->size = size;
		this->arr = new int[ this->size ];
	}
	bool empty( void )
	{
		return this->top == -1;
	}
	bool full( void )
	{
		return this->top == size - 1;
	}
	void push( int element )
	{
		if( this->full())
			throw StackOverflowException("Stack is full");
		this->arr[ ++ this->top ] = element;
	}
	int peek( void )
	{
		if( this->empty( ) )
			throw StackUnderflowException("Stack is empty");
		return this->arr[ this->top ];
	}
	void pop( void )
	{
		if( this->empty( ) )
			throw StackUnderflowException("Stack is empty");
		-- this->top;
	}
	~Stack( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
void accept_record( int &element )
{
	cout<<"Enter element	:	";
	cin>>element;
}
void print_record( int &element )
{
	cout<<"Popped element is	:	"<<element<<endl;;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice,element;
	Stack stk(4);
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		try
		{
			switch( choice )
			{
			case 1:
				::accept_record(element);
				stk.push( element );
				break;
			case 2:
				element = stk.peek( );
				::print_record( element );
				stk.pop( );
				break;
			}
		}
		catch( StackOverflowException &ex )
		{
			cout<<ex.getMessage()<<endl;
		}
		catch( StackUnderflowException &ex )
		{
			cout<<ex.getMessage()<<endl;
		}
	}
	return 0;
}
