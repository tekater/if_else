#include <iostream>

int main()
{
	setlocale(0, "");
	std::cout << "Задание 1:\n";
	int a;
	std::cout << "\nВведите год:\n";
	std::cin >> a;
	if ((a % 4) == 0) {
		std::cout << "Високосный - 366 days";
	}else{
		std::cout << "Не високосный - 365 days";
	}


	std::cout << "\n\nЗадание 2:\n";
	int b;
	int c;
	int d = 0;
	std::cout << "\nВведите количество гривен:\n";
	std::cin >> b;
	std::cout << "Введите Количество копеек:\n";
	std::cin >> c;
	if (c / 100 >= 1) {
		d = c / 100;
		c = c  - (d*100);
		b = b + d;
		std::cout << "\n Гривен: " << b;
		std::cout << "\n копеек: " << c;
	}
	else {
		std::cout << "\n Гривен: " << b;
		std::cout << "\n копеек: " << c;
	}


	std::cout << "\n\nЗадание 3:\n";
	double a1;// = 9; // Длина
	double b1;// = 7.5; // Ширина 
	double c1;// = 5; // Высота
	double V; // Объём
	std::cout << "\nВведите длину:\n";
	std::cin >> a1;
	std::cout << "\nВведите ширину:\n";
	std::cin >> b1;
	std::cout << "\nВведите высоту:\n";
	std::cin >> c1;
	V = a1 * b1 * c1;
	std::cout << "\nДлина: " << a1 << " см.";
	std::cout << "\nШирина: " << b1 << " см.";
	std::cout << "\nВысота: " << c1 << " см.";
	std::cout << "\nОбъём: " << V << " куб. см.";


	std::cout << "\n\nЗадание 4:\n";
	double a2; // Масштаб карты
	double b2; // Расстояние между точками
	
	double c2; // Расстояние между населеными пунктами
	std::cout << "\nВведите Масштаб карты:\n";
	std::cin >> a2;
	std::cout << "\nВведите Расстояние между точками:\n";
	std::cin >> b2;
	c2 = a2 * b2; 
	std::cout << "\nМасштаб карты: " << a2;
	std::cout << "\nРасстояние между точками, изображающими\nнаселенные пункты: " << b2;
	std::cout << "\nРасстояние между населеными пунктами: " << c2 << " км.\n";


	std::cout << "\n\nЗадание 5:\n";
	double R;
	int V1;
	std::cout << "\nВведите Радиус:\n";
	std::cin >> R;
	V1 = 1.33 * 3.14 * (R * R * R);
	std::cout << "\nОбъём шара: " << V1 << " мм.^3";

	return 0;
}
