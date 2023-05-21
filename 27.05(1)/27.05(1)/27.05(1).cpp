#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number1, number2;

    std::cout << "Введіть перше 3-значне число: ";
    std::cin >> number1;

    std::cout << "Введіть друге 3-значне число: ";
    std::cin >> number2;

    int middleDigit1 = (number1 / 10) % 10;
    int middleDigit2 = (number2 / 10) % 10;

    int newNumber1 = number1 - (middleDigit1 * 10) + (middleDigit2 * 10);
    int newNumber2 = number2 - (middleDigit2 * 10) + (middleDigit1 * 10);

    std::cout << "Нове перше число: " << newNumber1 << std::endl;
    std::cout << "Нове друге число: " << newNumber2 << std::endl;

    return 0;
}
