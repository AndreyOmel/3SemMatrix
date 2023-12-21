#pragma once
#include <iostream>
#include "..//Matrix/Matrix.h"

 
class Task {
public:
	Task(matrix::Matrix m);
	matrix::Matrix DoFirst();
	matrix::Matrix DoSecond();
private:
	matrix::Matrix m;
	
};