#include <vector>
#include <string>
#include <iostream>
#include "..//Matrix/Matrix.h"
#include "..//Matrix/RandomGenerator.h"
#include "..//Matrix/Task.h"
using namespace matrix;

int main() {
	
	int rows, cols,choose;
	std::cout << "enter row number ";
	std::cin >> rows;
	std::cout << "enter col number ";
	std::cin >> cols;
	
	std::cout << " choose keyboard(0)/random(any number) ";
	std::cin >> choose;
	
	RandomGenerator gen(0, 100);
	Matrix m = Matrix(rows, cols, &gen);
	std::cout << m<<std::endl<<std::endl;
	
	m = Task().DoFirst(m, rows, cols);
	std::cout << m<<std::endl<<std::endl;
	m=Task().DoSecond(m, rows, cols);
	std::cout << m;
	
	



}
