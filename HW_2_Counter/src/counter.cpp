// counter.cpp

/*
  27.01.2023
  ���� 2, ������� 3
  ������ 2, �������
  CPP-07
  @j1n4ed
*/

#include "counter.h"
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

	char option;
	bool stopFlag = false;
	bool notDefaultValueFlag = false;
	char operation;

	std::cout << "������� ������� � �������� ����������? (y/n)\n� ������ ������ ����� ������ ������� � ���������� �� ���������.\n";
	do
	{
		std::cin >> option;
	} while (option != 'y' &&
		option != 'n' &&
		option != 'Y' &&
		option != 'N' &&
		option != '�' &&
		option != '�' &&
		option != '�' &&
		option != '�');

	if (option == 'y' ||
		option == 'Y' ||
		option == '�' ||
		option == '�')
	{
		notDefaultValueFlag = true;
	}

	if (notDefaultValueFlag)
	{
		int userCounter = 0;
		std::cout << "������� ���������������� �������� ��������: ";
		std::cin >> userCounter;

		Counter count1(userCounter);

		do // while (!stopFlag);
		{
			system("CLS");
			std::cout << "��������� �������, ������� � ���������� ������������.\n\n";
			std::cout << "��������� ��������:\n\n" <<
				" + : ��������� ������� �� 1\n" <<
				" - : ��������� ������� �� 1\n" <<
				" = : �������� ������� �������� ��������\n" <<
				" x : ��������� ������ ���������\n" <<
				"\n------------------------------\n" <<
				"��������� ��������:\n" <<
				"Counter = " << count1.get_counter() <<
				"\n------------------------------\n" <<
				"������� �������� : ";

			std::cin >> operation;

			switch (operation)
			{
			case '+': // +1
				count1.increase();
				break;
			case '-': // -1
				count1.decrease();
				break;
			case '=': // �����
				std::cout << "\n�������� ��������: " << count1.get_counter() << "\n";
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
	} 
	else
	{
		Counter count2;

		do // while (!stopFlag);
		{
			system("CLS");
			std::cout << "��������� �������, ������� � ���������� �� ��������� (= 1).\n\n";
			std::cout << "��������� ��������:\n\n" <<
				" + : ��������� ������� �� 1\n" <<
				" - : ��������� ������� �� 1\n" <<
				" = : �������� ������� �������� ��������\n" <<
				" x : ��������� ������ ���������\n" <<
				"\n------------------------------\n" <<
				"��������� ��������:\n" <<
				"Counter = " << count2.get_counter() <<
				"\n------------------------------\n" <<
				"������� �������� : ";

			std::cin >> operation;

			switch (operation)
			{
			case '+': // +1
				count2.increase();
				break;
			case '-': // -1
				count2.decrease();
				break;
			case '=': // �����
				std::cout << "\n�������� ��������: " << count2.get_counter() << "\n";
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
	}	

	std::cout << std::endl;

	system("pause");
	return 0;
}