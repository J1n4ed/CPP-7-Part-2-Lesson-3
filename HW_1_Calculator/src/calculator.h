#ifndef CALCULATORH
#define CALCULATORH

#include <iostream>

/*
����������� ��� �������� � ����� �������
*/
class Calculator
{
	// -------------------------------------------------------------------------
	// PRIVATE AREA
private:
	double num1_;
	double num2_;
		
	// -------------------------------------------------------------------------
	// PUBLIC AREA
public: 

	/*
	����� ������ ���������� ��������� �������� num1 � num2
	*/
	double add()
	{
		return num1_ + num2_;
	}

	/*
	����� ������ ���������� ��������� ������������ num1 � num2
	*/
	double multiply()
	{
		return num1_ * num2_;
	}

	/*
	����� ������ ���������� ��������� ��������� num2 �� num1
	*/
	double subtract_1_2()
	{
		return num1_ - num2_;
	}

	/*
	����� ������ ���������� ��������� ��������� num1 �� num2
	*/
	double subtract_2_1()
	{
		return num2_ + num1_;
	}

	/*
	����� ������ ���������� ��������� ������� num1 �� num2
	*/
	double divide_1_2()
	{
		return num1_ / num2_;
	}

	/*
	����� ������ ���������� ��������� ������� num2 �� num1
	*/
	double divide_2_1()
	{
		return num2_ / num1_;
	}

	/*
	������ num1
	return double
	*/
	double get_num1()
	{
		return num1_;
	}

	/*
	������ num2
	return double
	*/
	double get_num2()
	{
		return num2_;
	}

	/*
	����� ������ ���������� �������� ���� num1 ������ �������� ��������� num1 � ������,
	���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������,
	� �������� ������ false
	*/
	bool set_num1(double num1)
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
	bool set_num2(double num2)
	{
		if (num2)
		{
			num2_ = num2;
			return 1;
		}
		else
			return 0;
	}	

	// -------------------------------------------------------------------------
	// ������������

	// ��� ������������ �� ���������
	Calculator() = delete;

	/*
	����������� � �����������
	num1 = ������ ��������
	num2 = ������ ��������
	*/
	Calculator(double num1, double num2) : num1_(num1), num2_(num2)
	{
		// ----
	}	
};

#endif // CALCULATORH