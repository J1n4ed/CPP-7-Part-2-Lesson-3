// counter.h

#ifndef COUNTERH
#define COUNTERH

#include <iostream>

class Counter
{
// ------------------------------------------------------------------------------
// PUBLIC
public:	

	/*
	����������� ��������� ��� �������� �� 1
	*/
	void increase();

	/*
	����������� ��������� ��� �������� �� 1
	*/
	void decrease();

	/*
	����������� ���������� ��� ������� ��������
	*/
	int get_counter();

	// ------------------------------------------------------------------------------
	// ������������

	/*
	����������� �� ���������
	counter = 1
	*/
	Counter()
	{
		counter_ = 1;
	}

	/*
	����������� � ����������
	counter = ��������
	*/
	Counter(int counter)
	{
		counter_ = counter;
	}

// ------------------------------------------------------------------------------
// PRIVATE
private:

	int counter_;
};

#endif // COUNTERH