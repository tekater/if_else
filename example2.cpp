#include <iostream>

int main()
{
    setlocale(0, "");
    std::cout << "Задача 1";
    int a;
    std::cout << "\nВведите число:\n";
    std::cin >> a;
    (a % 2 == 1) ? std::cout << "не чётное" : std::cout << "чётное";


    std::cout << "\n\nЗадача 2\n";
    int b, c;
    std::cout << "Введите два числа:\n";
    std::cin >> b >> c;
    (b > c) ? std::cout << "меньшее: " << c : std::cout << "меньшее: " << b;


    std::cout << "\n\nЗадача 3\n";
    int a1;
    std::cout << "Введите число:\n";
    std::cin >> a1;

    if (a1 > 0) {
        std::cout << "\nПоложительное число";
    }else if (a1 < 0) {
        std::cout << "\nОтрицательное число";
    }else {
        std::cout << "\nЧисло равно нулю";
    }

    std::cout << "\n\nЗадача 4\n";
    int a2;
    int b2;
    std::cout << "Введите два числа:\n";
    std::cin >> a2 >> b2;
    if (a2 == b2) {
        std::cout << "Числа равны";
    }else {
        if (a2 > b2) {
            std::cout << a2 << " > " << b2;
        }else {
            std::cout << b2 << " > " << a2;
        }
    }
    return 0;
}
