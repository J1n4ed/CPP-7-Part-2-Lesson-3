// main.cpp

/*
  27.01.2023
  ���� 2, ������� 3
  ������ 2, �������
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
		+: ��������� ������� �� 1
		-: ��������� ������� �� 1
		=: �������� ������� �������� ��������
		x: ��������� ������ ���������
	*/

	Counter counter1;
	bool stopFlag = false;
	char operation;

	do // while (!stopFlag);
	{
		system("CLS");
		std::cout << "��������� �������, ������� ������������ ������������� �� ���������, counter = 1\n\n";
		std::cout << "��������� ��������:\n\n" <<
			" + : ��������� ������� �� 1\n" <<
			" - : ��������� ������� �� 1\n" <<
			" = : �������� ������� �������� ��������\n" <<
			" x : ��������� ������ ���������\n" <<
			"\n------------------------------\n" <<
			"��������� ��������:\n" <<
			"Counter = " << counter1.get_counter() << 
			"\n------------------------------\n" << 
			"������� �������� : ";

		std::cin >> operation;

		switch (operation)
		{
		case '+': // +1
			counter1.increase();
			break;
		case '-': // -1
			counter1.decrease();
			break;
		case '=': // �����
			std::cout << "\n�������� ��������: " << counter1.get_counter() <<"\n";
			system("pause");
			break;
		case 'x': // � ����
			std::cout << "\n����� �� ���������...\n";
			stopFlag = true;
			break;
		case '�': // � ���
			std::cout << "\n����� �� ���������...\n";
			stopFlag = true;
			break;
		default:  // ������
			std::cout << "\n������ �����!\n";
			system("pause");
			break;
		}

	} while (!stopFlag);

	std::cout << std::endl;

	system("pause");
	return 0;
}