// counter.cpp

#include "counter.h"

/*
	����������� ��������� ��� �������� �� 1
*/
void Counter::increase()
{
	counter_++;
}

/*
����������� ��������� ��� �������� �� 1
*/
void Counter::decrease()
{
	counter_--;
}

/*
����������� ���������� ��� ������� ��������
*/
int Counter::get_counter()
{
	return counter_;
}