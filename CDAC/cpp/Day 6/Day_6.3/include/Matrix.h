#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix
{
private:
	int row;
	int col;
	int **arr;
public:
	Matrix( void );

	Matrix( int row, int col );

	void acceptRecord( void );

	void printRecord( void );

	~Matrix( void );
};//End of class

#endif /* MATRIX_H_ */
