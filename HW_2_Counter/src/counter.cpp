// counter.cpp

#include "counter.h"

/*
	возможность увеличить своё значение на 1
*/
void Counter::increase()
{
	counter_++;
}

/*
возможность уменьшить своё значение на 1
*/
void Counter::decrease()
{
	counter_--;
}

/*
возможность посмотреть своё текущее значение
*/
int Counter::get_counter()
{
	return counter_;
}