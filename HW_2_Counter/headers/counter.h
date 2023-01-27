// counter.h

#ifndef COUNTERH
#define COUNTERH

#include <iostream>

class Counter
{
private:
	// ------------------------------------------------------------------------------
	// PRIVATE АРГУМЕНТЫ
	int counter;
protected:
	// ------------------------------------------------------------------------------
	// PROTECTED МЕТОДЫ
public:
	// ------------------------------------------------------------------------------
	// PUBLIC МЕТОДЫ

	/*
	возможность увеличить своё значение на 1
	*/
	void increase()
	{
		this->counter++;
	}

	/*
	возможность уменьшить своё значение на 1
	*/
	void decrease()
	{
		this->counter--;
	}

	/*
	возможность посмотреть своё текущее значение
	*/
	int get_counter()
	{
		return this->counter;
	}

	// ------------------------------------------------------------------------------
	// КОНСТРУКТОРЫ

	/*
	Конструктор по умолчанию
	counter = 1
	*/
	Counter()
	{
		this->counter = 1;
	}

	/*
	Конструктор с параметром
	counter = аргумент
	*/
	Counter(int counter)
	{
		this->counter = counter;
	}
};

#endif // COUNTERH