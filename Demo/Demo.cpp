#include <vector>
#include <string>
#include <iostream>
#include "..//Matrix/Matrix.h"
#include "..//Matrix/Generate.h"
#include "..//Matrix/Task.h"
using namespace matrix;

int main() {
	
	int rows, cols,choose;
	std::cout << "enter row number ";
	std::cin >> rows;
	std::cout << "enter col number ";
	std::cin >> cols;
	Matrix m = Matrix(rows, cols);
	std::cout << " choose keyboard(0)/random(any number) ";
	std::cin >> choose;
	
	if (choose==0){
		KeyboardGenerator gen;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				m[i][j] = gen.generate();
			}
		}
	}
	else {
		RandomGenerator gen;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				m[i][j] = gen.generate();
			}
		}
	}
	
	std::cout << m<<std::endl<<std::endl;
	
	m = Task().DoFirst(m, rows, cols);
	std::cout << m<<std::endl<<std::endl;
	m=Task().DoSecond(m, rows, cols);
	std::cout << m;
	
	



}
