#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    std::cout << "Введіть п'ятизначне число: ";
    std::cin >> number;

    int result = (number % 100) * 1000 + (number / 100);

    std::cout << "Результат циклічного зсуву: " << result << std::endl;

    return 0;
}
