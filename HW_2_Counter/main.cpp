// main.cpp

/*
  27.01.2023
  Тема 2, Занятие 3
  Работа 2, Счётчик
  CPP-07
  @j1n4ed
*/

#include "src\counter.h"
#include <iostream>
#include <Windows.h>

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*
		+: увеличьте счётчик на 1
		-: уменьшите счётчик на 1
		=: выведите текущее значение счётчика
		x: завершите работу программы
	*/

	char option;
	bool stopFlag = false;
	bool notDefaultValueFlag = false;
	char operation;

	std::cout << "Создать счётчик с заданным параметром? (y/n)\nВ случае отказа будет создан счётчик с параметром по умолчанию.\n";
	do
	{
		std::cin >> option;
	} while (option != 'y' &&
		option != 'n' &&
		option != 'Y' &&
		option != 'N' &&
		option != 'д' &&
		option != 'н' &&
		option != 'Д' &&
		option != 'Н');

	if (option == 'y' ||
		option == 'Y' ||
		option == 'д' ||
		option == 'Д')
	{
		notDefaultValueFlag = true;
	}

	if (notDefaultValueFlag)
	{
		int userCounter = 0;
		std::cout << "Введите пользовательский параметр счётчика: ";
		std::cin >> userCounter;

		Counter count(userCounter);

		do // while (!stopFlag);
		{
			system("CLS");
			std::cout << "Программа счётчик, счётчик с параметром пользователя.\n\n";
			std::cout << "Доступные операции:\n\n" <<
				" + : увеличьте счётчик на 1\n" <<
				" - : уменьшите счётчик на 1\n" <<
				" = : выведите текущее значение счётчика\n" <<
				" x : завершите работу программы\n" <<
				"\n------------------------------\n" <<
				"Состояние счётчика:\n" <<
				"Counter = " << count.get_counter() <<
				"\n------------------------------\n" <<
				"Введите операцию : ";

			std::cin >> operation;

			switch (operation)
			{
			case '+': // +1
				count.increase();
				break;
			case '-': // -1
				count.decrease();
				break;
			case '=': // вывод
				std::cout << "\nЗначение счётчика: " << count.get_counter() << "\n";
				system("pause");
				break;
			case 'x': // х англ
				std::cout << "\nВыход из программы...\n";
				stopFlag = true;
				break;
			case 'х': // х рус
				std::cout << "\nВыход из программы...\n";
				stopFlag = true;
				break;
			default:  // ошибка
				std::cout << "\nОшибка ввода!\n";
				system("pause");
				break;
			}

		} while (!stopFlag);
	} 
	else
	{
		Counter count;

		do // while (!stopFlag);
		{
			system("CLS");
			std::cout << "Программа счётчик, счётчик с параметром по умолчанию (= 1).\n\n";
			std::cout << "Доступные операции:\n\n" <<
				" + : увеличьте счётчик на 1\n" <<
				" - : уменьшите счётчик на 1\n" <<
				" = : выведите текущее значение счётчика\n" <<
				" x : завершите работу программы\n" <<
				"\n------------------------------\n" <<
				"Состояние счётчика:\n" <<
				"Counter = " << count.get_counter() <<
				"\n------------------------------\n" <<
				"Введите операцию : ";

			std::cin >> operation;

			switch (operation)
			{
			case '+': // +1
				count.increase();
				break;
			case '-': // -1
				count.decrease();
				break;
			case '=': // вывод
				std::cout << "\nЗначение счётчика: " << count.get_counter() << "\n";
				system("pause");
				break;
			case 'x': // х англ
				std::cout << "\nВыход из программы...\n";
				stopFlag = true;
				break;
			case 'х': // х рус
				std::cout << "\nВыход из программы...\n";
				stopFlag = true;
				break;
			default:  // ошибка
				std::cout << "\nОшибка ввода!\n";
				system("pause");
				break;
			}

		} while (!stopFlag);
	}	

	std::cout << std::endl;

	system("pause");
	return 0;
}