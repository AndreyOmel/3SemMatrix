#include "Matrix.h"
#include <vector>
#include <string>




matrix::Matrix::Matrix(int rows,int cols) :
	rows(rows), cols(cols), matrix(rows, Row(cols))
{

}

matrix::Matrix::Matrix(int rows, int cols, Generator* g):
	rows(rows), cols(cols),g(g), matrix(rows,Row(cols))
{

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = g->generate();
		}
	}
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