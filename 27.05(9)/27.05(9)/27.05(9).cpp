#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double mercuryMass = 0.330;
    double venusMass = 4.87;
    double earthMass = 5.97;
    double marsMass = 0.642;
    double jupiterMass = 1898.0;
    double saturnMass = 568.0;
    double uranusMass = 86.8;
    double neptuneMass = 102.0;

    double totalMass = mercuryMass + venusMass + earthMass + marsMass + jupiterMass + saturnMass + uranusMass + neptuneMass;
    double averageMass = totalMass / 8;
    double mercuryPercentage = (mercuryMass / totalMass) * 100;
    double venusPercentage = (venusMass / totalMass) * 100;
    double earthPercentage = (earthMass / totalMass) * 100;
    double marsPercentage = (marsMass / totalMass) * 100;
    double jupiterPercentage = (jupiterMass / totalMass) * 100;
    double saturnPercentage = (saturnMass / totalMass) * 100;
    double uranusPercentage = (uranusMass / totalMass) * 100;
    double neptunePercentage = (neptuneMass / totalMass) * 100;

    double largestPlanetMass = jupiterMass;
    double sumOfOtherPlanetsMass = totalMass - largestPlanetMass;
    double ratio = largestPlanetMass / sumOfOtherPlanetsMass;

    std::cout << "Общая масса планет: " << totalMass << " земных масс" << std::endl;
    std::cout << "Средняя масса планет: " << averageMass << " земных масс" << std::endl;
    std::cout << "Масса Меркурія у відсотках: " << mercuryPercentage << "%" << std::endl;
    std::cout << "Масса Венери у відсотках: " << venusPercentage << "%" << std::endl;
    std::cout << "Масса Землі у відсотках: " << earthPercentage << "%" << std::endl;
    std::cout << "Масса Марса у відсотках: " << marsPercentage << "%" << std::endl;
    std::cout << "Масса Юпітера у відсотках: " << jupiterPercentage << "%" << std::endl;
    std::cout << "Масса Сатурна у відсотках: " << saturnPercentage << "%" << std::endl;
    std::cout << "Масса Урана у відсотках: " << uranusPercentage << "%" << std::endl;
    std::cout << "Масса Нептуна у відсотках: " << neptunePercentage << "%" << std::endl;
    std::cout << "Масса найбільшої планети в " << ratio << " рази більше, ніж сума мас всіх інших планет" << std::endl;

    return 0;
}
