#include "Row.h"

Row::Row(std::initializer_list<int> r): 
	row(r)
{

}
Row::Row(int cols) :
	row(cols, 0)
{
	if (cols <= 0) { throw std::out_of_range("Incorrect size"); }

}
int& Row::operator[](const int index)
{
	if (index < row.size()) {
		return row[index];
	}

}

std::ostream& operator<<(std::ostream& os, const Row& row)
{
	for (int value : row.row) {
		os << value << ' ';
	}
	return os;
}
