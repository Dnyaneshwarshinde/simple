	#include<iostream>
using namespace std;

#include"../include/Matrix.h"
Matrix::Matrix( void )
{
	this->row = 0;
	this->col = 0;
	this->arr = NULL;
}
Matrix::Matrix( int row, int col )
{
	this->row = row;
	this->col = col;
	this->arr = new int*[ this->row ];
	for( int index = 0; index < this->row; ++ index)
		this->arr[ index ] = new int[ this->col ];
}
void Matrix::acceptRecord( void )
{
	for( int i = 0; i < this->row; ++ i )
	{
		for( int j = 0; j < this->col; ++ j )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ i ][ j ];l
		}
	}
}
void Matrix::printRecord( void )
{
	for( int i = 0; i < this->row; ++ i )
	{
		for( int j = 0; j < this->col; ++ j )
		{
			cout<<this->arr[ i ][ j ]<<"	";
		}
		cout<<endl;
	}
}
Matrix::~Matrix( void )
{
	if( this->arr != NULL )
	{
		for( int index = 0; index < this->row; ++ index)
			delete[] this->arr[ index ];
		delete[] this->arr;
		this->arr = NULL;
	}
}
