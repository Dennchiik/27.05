#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleCP(1251);

    int number;

    std::cout << "Введіть 4-значне число: ";
    std::cin >> number;

    int firstDigit = number / 1000;           
    int secondDigit = (number / 100) % 10;    
    int thirdDigit = (number / 10) % 10;      
    int fourthDigit = number % 10;           

    int sum = firstDigit + thirdDigit;

    int difference = secondDigit - fourthDigit;

    std::cout << "Сума першої та третьої цифри: " << sum << std::endl;
    std::cout << "Різниця другої та четвертої цифри: " << difference << std::endl;

    return 0;
}
