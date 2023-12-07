#pragma once
#include <iostream>
#include "..//Matrix/Matrix.h"

 
class Task {
public:
	Task();
	matrix::Matrix DoFirst(matrix::Matrix m, int rows, int cols);
	matrix::Matrix DoSecond(matrix::Matrix m, int rows, int cols);

};