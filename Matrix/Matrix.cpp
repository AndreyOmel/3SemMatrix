#include "Matrix.h"
#include <vector>
#include <string>




matrix::Matrix::Matrix() :
	rows(0), cols(0)
{

}
matrix::Matrix::Matrix(int rows, int cols):
	rows(rows), cols(cols), matrix(rows,Row(cols))
{

}

Row& matrix::Matrix::operator[](const int index)
{
	return matrix[index];
}

matrix::Matrix::~Matrix()
{
}

std::ostream& matrix::operator<<(std::ostream& os, const Matrix& mat)
{
	for (const Row& row : mat.matrix) {
		os << row << '\n';
	}
	return os;
}