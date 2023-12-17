#include <vector>
#include <string>
#include <iostream>
#include "..//Matrix/Matrix.h"
#include "..//Matrix/RandomGenerator.h"

#include "..//Matrix/Task.h"
using namespace matrix;

int main() {
	setlocale(LC_ALL, "rus");
	enum class fillingarray {
		c_Random,
		c_Manual
	};

	
	int rows, cols;
	std::cout << "enter row number ";
	std::cin >> rows;
	std::cout << "enter col number ";
	std::cin >> cols;

	int input = 0;
	
	std::cout << "Выберите способ заполнения массива (Рандом = " << static_cast<int>(fillingarray::c_Random) << ", с клавиатуры = " << static_cast<int>(fillingarray::c_Manual) << ") " << "\n";
	std::cin >> input;
	const auto choise = static_cast<fillingarray>(input);
	
	switch (choise) {
	case(fillingarray::c_Random):
	{
		RandomGenerator gen(0, 100);
		matrix::Matrix m = Matrix(rows, cols, &gen);
		std::cout << m << std::endl << std::endl;
		Task t = Task(m);
		m =t.DoFirst();
		std::cout << m << std::endl << std::endl;
		m = t.DoSecond();
		std::cout << m;
		break; }
	
	default:
		std::cout << "Error! Нет такой функции";
		return 1;
	}

}
