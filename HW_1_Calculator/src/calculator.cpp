// calculator.cpp

#include "calculator.h"

/*
	����� ������ ���������� ��������� �������� num1 � num2
	*/
double Calculator::add()
{
	return num1_ + num2_;
}

/*
����� ������ ���������� ��������� ������������ num1 � num2
*/
double Calculator::multiply()
{
	return num1_ * num2_;
}

/*
����� ������ ���������� ��������� ��������� num2 �� num1
*/
double Calculator::subtract_1_2()
{
	return num1_ - num2_;
}

/*
����� ������ ���������� ��������� ��������� num1 �� num2
*/
double Calculator::subtract_2_1()
{
	return num2_ + num1_;
}

/*
����� ������ ���������� ��������� ������� num1 �� num2
*/
double Calculator::divide_1_2()
{
	return num1_ / num2_;
}

/*
����� ������ ���������� ��������� ������� num2 �� num1
*/
double Calculator::divide_2_1()
{
	return num2_ / num1_;
}

/*
������ num1
return double
*/
double Calculator::get_num1()
{
	return num1_;
}

/*
������ num2
return double
*/
double Calculator::get_num2()
{
	return num2_;
}

/*
����� ������ ���������� �������� ���� num1 ������ �������� ��������� num1 � ������,
���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������,
� �������� ������ false
*/
bool Calculator::set_num1(double num1)
{
	if (num1)
	{
		num1_ = num1;
		return 1;
	}
	else
		return 0;
}

/*
����� ������ ���������� �������� ���� num2 ������ �������� ��������� num2 � ������,
���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������,
� �������� ������ false
*/
bool Calculator::set_num2(double num2)
{
	if (num2)
	{
		num2_ = num2;
		return 1;
	}
	else
		return 0;
}