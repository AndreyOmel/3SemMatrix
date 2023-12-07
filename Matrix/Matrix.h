#pragma once
#include "Row.h"
#include <iostream>
namespace  matrix {
	class Matrix {
		public:
			Matrix(int rows, int cols);
			Matrix();

			friend std::ostream& operator<<(std::ostream& os, const Matrix& mat);
			
			Row& operator[](const int index);
			~Matrix();

		private:
			std::vector<Row>matrix;
			int rows;
			int cols;

	};
}
