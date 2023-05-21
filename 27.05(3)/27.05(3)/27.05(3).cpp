#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    std::cout << "Введіть 3-значне число: ";
    std::cin >> number;

    int firstDigit = number / 100;          
    int secondDigit = (number / 10) % 10;   
    int thirdDigit = number % 10;           

    int newNumber = firstDigit * 10 + thirdDigit;

    std::cout << "Число після видалення середньої цифри: " << newNumber << std::endl;

    return 0;
}
