#pragma once

#include"Generate.h"
class KeyboardGenerator : public Generator {
private:
    std::istream& in;

public:
    KeyboardGenerator(std::istream& in = std::cin);

    int generate() override;
};