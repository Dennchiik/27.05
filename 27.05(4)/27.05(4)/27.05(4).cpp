#include <iostream>
#include <Windows.h.>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double depositAmount;   
    double interestRate;    

    std::cout << "Введіть суму грошового вкладу у гривнях: ";
    std::cin >> depositAmount;

    std::cout << "Введіть процент річних, який виплачує банк: ";
    std::cin >> interestRate;

    double monthlyPayment = (depositAmount * interestRate) / 100 / 12;

    std::cout << "Сума грошей, що сплачуються банком вкладнику щомісяця: " << monthlyPayment << " гривень" << std::endl;

    return 0;
}
