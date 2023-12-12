#pragma once
#include <iostream>
#include "..//Matrix/Matrix.h"

 
class Task {
public:
	Task(matrix::Matrix m, int rows, int cols);
	matrix::Matrix DoFirst();
	matrix::Matrix DoSecond();
private:
	matrix::Matrix m;
	size_t rows;
	size_t cols;
};