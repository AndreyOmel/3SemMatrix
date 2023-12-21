#pragma once
#include "Row.h"
#include "Generate.h"
#include <iostream>
namespace  matrix {
	class Matrix {
		public:
			Matrix(int rows, int cols, Generator* g);
			Matrix(int rows, int cols);
			int Get_rows();
			int Get_cols();

			friend std::ostream& operator<<(std::ostream& os, const Matrix& mat);
			
			Row& operator[](const int index);
			

		private:
			std::vector<Row>matrix;
			size_t rows;
			size_t cols;
			Generator* g;
	};
}
