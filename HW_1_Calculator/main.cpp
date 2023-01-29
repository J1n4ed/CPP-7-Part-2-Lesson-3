// main.cpp

/*
  27.01.2023
  Тема 2, Занятие 3
  Работа 1, Калькулятор двух чисел
  CPP-07
  @j1n4ed
*/

#include "src/calculator.h"
#include <iostream>
#include <Windows.h>

/*
	Основной вывод операций
	Выводит результаты операций над num1 и num2
	в консоль
*/
void print_operations(Calculator& obj);

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double n1 = 0, n2 = 0;
	bool firstRun = true;

	std::cout << "Введите два числа для рассчёта типа double.\n"
		<< "Числа должны быть не равны 0.\n"; 

	do { // while (!n1);
		std::cout << "Введите n1 : ";
		std::cin >> n1;
	} while (!n1);

	do { // while (!n2);
		std::cout << "Введите n2: ";
		std::cin >> n2;
	} while (!n2);

	Calculator calc(n1, n2);

	do // while (!exitFlag);
	{	

		if (!firstRun)
		{
			std::cout << "Введите два числа для рассчёта типа double.\n";

			do {
				std::cout << "Введите n1 : ";
				std::cin >> n1;
			} while (!calc.set_num1(n1));

			do {
				std::cout << "Введите n2: ";
				std::cin >> n2;
			} while (!calc.set_num1(n2));

			system("CLS");
		} 

		std::cout << "N1 = " << calc.get_num1() << ", N2 = " << calc.get_num2() << "\n";

		print_operations(calc);				

		firstRun = false;		

	} while (true);

	system("pause");
	return 0;
} // END OF MAIN()

/*
	Основной вывод операций
	Выводит результаты операций над num1 и num2
	в консоль
*/
void print_operations(Calculator &obj)
{
	std::cout << "add\t\t=\t" << obj.add() << "\n";
	std::cout << "multiply\t=\t" << obj.multiply() << "\n";
	std::cout << "subtract_1_2\t=\t" << obj.subtract_1_2() << "\n";
	std::cout << "subtract_2_1\t=\t" << obj.subtract_2_1() << "\n";
	std::cout << "divide_1_2\t=\t" << obj.divide_1_2() << "\n";
	std::cout << "subtract_2_1\t=\t" << obj.divide_1_2() << std::endl;
}