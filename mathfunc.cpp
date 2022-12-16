#include "mathfunc.h"


double my_math::add(double x, double y)
{
	return x + y;
}

double my_math::subtract(double x, double y)
{
	return x - y;
}

double my_math::multiply(double x, double y)
{
	return x * y;
}

double my_math::devide(double x, double y)
{
	return x / y;
}

double my_math::exponentiation(double x, double y)
{
	double result = x;

	for (int i = 1; i < y; ++i)
	{
		result *= x;
	}

	return result;
}
