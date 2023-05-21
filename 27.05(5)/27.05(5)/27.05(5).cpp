#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double price;
    double budget;

    std::cout << "Введіть ціну товару у гривнях: ";
    std::cin >> price;

    std::cout << "Введіть суму грошей у гривнях: ";
    std::cin >> budget;

    int quantity = budget / price;
    double change = budget - (quantity * price);

    std::cout << "Кількість товару, яку можна купити: " << quantity << std::endl;
    std::cout << "Сдача: " << change << " гривень" << std::endl;

    return 0;
}
