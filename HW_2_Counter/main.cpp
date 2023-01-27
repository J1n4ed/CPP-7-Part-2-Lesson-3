// main.cpp

/*
  27.01.2023
  Тема 2, Занятие 3
  Работа 2, Счётчик
  CPP-07
  @j1n4ed
*/

#include "headers/counter.h"
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

	Counter counter1;
	bool stopFlag = false;
	char operation;

	do // while (!stopFlag);
	{
		system("CLS");
		std::cout << "Программа счётчик, счётчик сгенерирован конструктором по умолчанию, counter = 1\n\n";
		std::cout << "Доступные операции:\n\n" <<
			" + : увеличьте счётчик на 1\n" <<
			" - : уменьшите счётчик на 1\n" <<
			" = : выведите текущее значение счётчика\n" <<
			" x : завершите работу программы\n" <<
			"\n------------------------------\n" <<
			"Состояние счётчика:\n" <<
			"Counter = " << counter1.get_counter() << 
			"\n------------------------------\n" << 
			"Введите операцию : ";

		std::cin >> operation;

		switch (operation)
		{
		case '+': // +1
			counter1.increase();
			break;
		case '-': // -1
			counter1.decrease();
			break;
		case '=': // вывод
			std::cout << "\nЗначение счётчика: " << counter1.get_counter() <<"\n";
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

	std::cout << std::endl;

	system("pause");
	return 0;
}