#include "Row.h"

Row::Row(std::initializer_list<int> r): 
	row(r)
{

}
Row::Row(int cols) :
	row(cols, 0)
{

}
int& Row::operator[](const int index)
{
	return row[index];

}

std::ostream& operator<<(std::ostream& os, const Row& row)
{
	for (int value : row.row) {
		os << value << ' ';
	}
	return os;
}
