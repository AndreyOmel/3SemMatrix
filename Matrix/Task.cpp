#include "Task.h"
#include <cmath>
#include <vector>
Task::Task(matrix::Matrix m, int rows, int cols):
	m(m),rows(rows),cols(cols)
{
	

}

matrix::Matrix Task::DoFirst()
{
	for (int c = 0; c < cols; c++) {
		int min = m[0][c];
		int minR = 0;
		for (int r = 0; r < rows; r++) {
			if (abs(m[r][c]) < min) {
				min = abs(m[r][c]);
				minR = r;

			}
		}
		m[minR][c] = 0;
	}
	return m;
}

matrix::Matrix Task::DoSecond()
{
	std::vector<int> a;
	for (int c = 0; c < cols; c++) {
		if (m[0][c] <= m[rows - 1][c]) {
			a.push_back(c);
		}
	}
	int cols1 = a.size();
	matrix::Matrix m1 = matrix::Matrix(rows,cols1);
	int col_i = 0;
	for (col_i = 0; col_i < cols1; col_i++) {
		for (int r = 0; r < rows; r++) {


			//std::cout << m[r][a[col_i]]<<" "<< a[col_i]<<std::endl;
			m1[r][col_i] = m[r][a[col_i]];
			//std::cout << m1[r][col_i] << std::endl;
			
			


		}
	}
	
	return m1;
}
