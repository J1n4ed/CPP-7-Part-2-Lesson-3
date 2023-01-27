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
	double num1;
	double num2;
	bool ready;
	// -------------------------------------------------------------------------
	// PROTECTED AREA
protected:
	
	/*
	����� ������ ���������� ��������� �������� num1 � num2
	*/
	double add()
	{
		return this->num1 + this->num2;
	}

	/*
	����� ������ ���������� ��������� ������������ num1 � num2
	*/
	double multiply()
	{
		return this->num1 * this->num2;
	}

	/*
	����� ������ ���������� ��������� ��������� num2 �� num1
	*/
	double subtract_1_2()
	{
		return this->num1 - this->num2;
	}

	/*
	����� ������ ���������� ��������� ��������� num1 �� num2
	*/
	double subtract_2_1()
	{
		return this->num2 + this->num1;
	}

	/*
	����� ������ ���������� ��������� ������� num1 �� num2
	*/
	double divide_1_2()
	{
		return this->num1 / this->num2;
	}

	/*
	����� ������ ���������� ��������� ������� num2 �� num1
	*/
	double divide_2_1()
	{
		return this->num2 / this->num1;
	}

	// -------------------------------------------------------------------------
	// PUBLIC AREA
public: 

	/*
	�������� ����� ��������
	������� ���������� �������� ��� num1 � num2
	� �������
	*/
	void print_operations()
	{
		std::cout << "add\t\t=\t" << this->add() << "\n";
		std::cout << "multiply\t=\t" << this->multiply() << "\n";
		std::cout << "subtract_1_2\t=\t" << this->subtract_1_2() << "\n";
		std::cout << "subtract_2_1\t=\t" << this->subtract_2_1() << "\n";
		std::cout << "divide_1_2\t=\t" << this->divide_1_2() << "\n";
		std::cout << "subtract_2_1\t=\t" << this->divide_1_2() << std::endl;
	}

	/*
	������ num1
	return double
	*/
	double get_num1()
	{
		return this->num1;
	}

	/*
	������ num2
	return double
	*/
	double get_num2()
	{
		return this->num2;
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
			this->num1 = num1;
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
			this->num2 = num2;
			return 1;
		}
		else
			return 0;
	}

	/*
	�������� ����� �� ����� � ���������
	num1 != 0
	num2 != 0
	*/
	void check_ready()
	{
		if (this->num1 && this->num2)
		{
			this->ready = true;
		}
		else
		{
			this->ready = false;
		}
	}

	/*
	������� ���������� ������������
	return bool
	*/
	bool get_ready()
	{
		return this->ready;
	}

	// -------------------------------------------------------------------------
	// ������������

	/*
	����������� �� ���������.
	num1 = 0;
	num2 = 0;
	*/
	Calculator()
	{
		this->num1 = 0;
		this->num2 = 0;
		this->ready = false;
	}

	/*
	����������� � �����������
	num1 = ������ ��������
	num2 = ������ ��������
	*/
	Calculator(double num1, double num2)
	{
		this->num1 = num1;
		this->num2 = num2;
		this->ready = true;
	}	
};

#endif // CALCULATORH