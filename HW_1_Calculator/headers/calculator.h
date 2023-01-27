#ifndef CALCULATORH
#define CALCULATORH

#include <iostream>

/*
Калькулятор для действия с двумя числами
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
	метод должен возвращать результат сложения num1 и num2
	*/
	double add()
	{
		return this->num1 + this->num2;
	}

	/*
	метод должен возвращать результат перемножения num1 и num2
	*/
	double multiply()
	{
		return this->num1 * this->num2;
	}

	/*
	метод должен возвращать результат вычитания num2 из num1
	*/
	double subtract_1_2()
	{
		return this->num1 - this->num2;
	}

	/*
	метод должен возвращать результат вычитания num1 из num2
	*/
	double subtract_2_1()
	{
		return this->num2 + this->num1;
	}

	/*
	метод должен возвращать результат деления num1 на num2
	*/
	double divide_1_2()
	{
		return this->num1 / this->num2;
	}

	/*
	метод должен возвращать результат деления num2 на num1
	*/
	double divide_2_1()
	{
		return this->num2 / this->num1;
	}

	// -------------------------------------------------------------------------
	// PUBLIC AREA
public: 

	/*
	Основной вывод операций
	Выводит результаты операций над num1 и num2
	в консоль
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
	геттер num1
	return double
	*/
	double get_num1()
	{
		return this->num1;
	}

	/*
	геттер num2
	return double
	*/
	double get_num2()
	{
		return this->num2;
	}

	/*
	метод должен установить значение поля num1 равное значению аргумента num1 в случае,
	если значение аргумента не равно 0. Возвращает true, если установка произошла успешно,
	в обратном случае false
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
	метод должен установить значение поля num2 равное значению аргумента num2 в случае,
	если значение аргумента не равно 0. Возвращает true, если установка произошла успешно,
	в обратном случае false
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
	Проверка готов ли класс к операциям
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
	Возврат готовности калькулятора
	return bool
	*/
	bool get_ready()
	{
		return this->ready;
	}

	// -------------------------------------------------------------------------
	// КОНСТРУКТОРЫ

	/*
	Конструктор по умолчанию.
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
	Конструктор с параметрами
	num1 = первый аргумент
	num2 = второй аргумент
	*/
	Calculator(double num1, double num2)
	{
		this->num1 = num1;
		this->num2 = num2;
		this->ready = true;
	}	
};

#endif // CALCULATORH