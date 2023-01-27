// counter.h

#ifndef COUNTERH
#define COUNTERH

#include <iostream>

class Counter
{
private:
	// ------------------------------------------------------------------------------
	// PRIVATE ���������
	int counter;
protected:
	// ------------------------------------------------------------------------------
	// PROTECTED ������
public:
	// ------------------------------------------------------------------------------
	// PUBLIC ������

	/*
	����������� ��������� ��� �������� �� 1
	*/
	void increase()
	{
		this->counter++;
	}

	/*
	����������� ��������� ��� �������� �� 1
	*/
	void decrease()
	{
		this->counter--;
	}

	/*
	����������� ���������� ��� ������� ��������
	*/
	int get_counter()
	{
		return this->counter;
	}

	// ------------------------------------------------------------------------------
	// ������������

	/*
	����������� �� ���������
	counter = 1
	*/
	Counter()
	{
		this->counter = 1;
	}

	/*
	����������� � ����������
	counter = ��������
	*/
	Counter(int counter)
	{
		this->counter = counter;
	}
};

#endif // COUNTERH