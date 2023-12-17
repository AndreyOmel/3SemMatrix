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
	if (rows <= 0 or cols <= 0) {
		throw std::out_of_range("Incorrect size");
	}
	else if (g == nullptr) {
		throw std::out_of_range("Empty Gen");
	}
	else{
		for (size_t i = 0; i < rows; i++) {
			for (size_t j = 0; j < cols; j++) {
				matrix[i][j] = g->generate();
			}
		}
	}
	
}

Row& matrix::Matrix::operator[](const int index)
{
	if (index < matrix.size()) {
		return matrix[index];
	}
	else { throw std::out_of_range("Incorrect size"); }
	
}

int matrix::Matrix::Get_rows()
{
	return rows;
}

int matrix::Matrix::Get_cols()
{
	return cols;
}





std::ostream& matrix::operator<<(std::ostream& os, const Matrix& mat)
{
	for (const Row& row : mat.matrix) {
		os << row << '\n';
	}
	return os;
}

