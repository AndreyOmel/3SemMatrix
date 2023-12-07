#include <iostream>
#include <cstdlib>
#include <random>
class Generator {
public:
    // Виртуальная функция генерации одного числа
    virtual int generate() = 0;

    // Виртуальный деструктор
    virtual ~Generator() {}
};

class RandomGenerator : public Generator {
public:
    // Реализация функции генерации случайного числа
    int generate() override {
        std::random_device rd;  // Создание объекта для генерации случайного зерна
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, 100);  // Равномерное распределение в заданном диапазоне

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