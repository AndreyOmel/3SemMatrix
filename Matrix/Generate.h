#include <iostream>
#include <cstdlib>
#include <random>
class Generator {
public:
    // ����������� ������� ��������� ������ �����
    virtual int generate() = 0;

    // ����������� ����������
    virtual ~Generator() {}
};

class RandomGenerator : public Generator {
public:
    // ���������� ������� ��������� ���������� �����
    int generate() override {
        std::random_device rd;  // �������� ������� ��� ��������� ���������� �����
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, 100);  // ����������� ������������� � �������� ���������

        return dis(gen);
    }
};

class KeyboardGenerator : public Generator {
private:
    std::istream& in;

public:
    KeyboardGenerator(std::istream& in = std::cin):in(in) {

    }

    int generate() override {
        int value=0;
        std::cout << "input element: ";
        this->in >> value;
        return value;
    }
};