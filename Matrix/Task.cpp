#include "Task.h"
#include <cmath>
#include <vector>
Task::Task(matrix::Matrix m):
	m(m)
{
	

}

matrix::Matrix Task::DoFirst()
{
	int cols = m.Get_cols();
	int rows = m.Get_rows();
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
	int cols = m.Get_cols();
	int rows = m.Get_rows();
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
			m1[r][col_i] = m[r][a[col_i]];
		}
	}
	
	return m1;
}
