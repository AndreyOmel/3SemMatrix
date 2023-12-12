#include "KeyboardGenerator.h"

KeyboardGenerator::KeyboardGenerator(std::istream& in):
	in(in)
{

}

int KeyboardGenerator::generate()
{
        int value = 0;
        std::cout << "input element: ";
        this->in >> value;
        return value;
	
}

