// main.cpp

/*
  27.01.2023
  Тема 2, Занятие 3
  Работа 1, Калькулятор двух чисел
  CPP-07
  @j1n4ed
*/

#include "headers/calculator.h"
#include <iostream>
#include <Windows.h>

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	{ // calc1 operations
		Calculator calc1;
		double n1 = 0;
		double n2 = 0;

		if (calc1.get_ready())
		{
			std::cout << "Calc1 готов!\n\n";
			calc1.print_operations();
		} // end if (calc1.get_ready())
		else // !calc1.get_ready()
		{
			std::cout << "Calc1 не готов!\n";
			std::wcout << "Num1 = " << calc1.get_num1() << ", Num2 = " << calc1.get_num2() << "\n\n";		

			do // while (!n1 || !n2)
			{
				std::cout << "Введите n1 (не 0) = ";
				std::cin >> n1;
				std::cout << "Введите n2 (не 0) = ";
				std::cin >> n2;
			} while (!n1 || !n2);

			calc1.set_num1(n1);
			calc1.set_num2(n2);
			calc1.check_ready();

			if (calc1.get_ready())
			{
				std::cout << "Calc1 готов!\n\n";
				calc1.print_operations();
			}
		} // end else	

	} // end of calc1 operations

	std::cout << "\n------------------------------------------------\n";	

	{ // calc2 operations

		Calculator calc2;
		std::cout << "Calc2 не готов, установите параметры num1 и num2\n";

		double n1 = 0;
		double n2 = 0;

		do // while (calc2.get_ready())
		{
			std::cout << std::endl;
			std::cout << "Введите n1 (не 0, 0 для выхода) = ";
			std::cin >> n1;
			std::cout << "Введите n2 (не 0, 0 для выхода) = ";
			std::cin >> n2;

			calc2.set_num1(n1);
			calc2.set_num2(n2);

			calc2.check_ready();

			if (calc2.get_ready())
			{
				std::cout << "Calc2 is ready!\n\n";
				calc2.print_operations();
			}
			else // !calc2.get_ready()
			{
				std::cout << "Calc2 не готов, выход из программы\n";
			}

		} while (calc2.get_ready());

	}  // end of calc2 operations

	std::cout << "\n------------------------------------------------\n";
	std::cout << "Calc3, конструктор с параметрами\n";

	{ // calc3 operations

		Calculator calc3( 62.2, 17.3 );
		
		if (calc3.get_ready())
		{
			std::cout << "Calc3 готов!\n";
			std::wcout << "Num1 = " << calc3.get_num1() << ", Num2 = " << calc3.get_num2() << "\n\n";
			calc3.print_operations();
		} // end if (calc3.get_ready())

	} // end of calc3 operations

	std::cout << "\n\nНажмите любую кнопку..." << std::endl;
	getchar();
	return 0;
}