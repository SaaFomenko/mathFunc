#include <iostream>
#include "mathfunc.h"
#include "userin.h"


int main()
{
	enum id_msg
	{
		num1,
		num2,
		oper
	};

	enum id_oper
	{
		add = 1,
		subtract,
		multiply,
		devide,
		exponentiation,
	};

	double x = 0;
	double y = 0;
	int oper_num = 0;

	const std::string msg_num1 = "Введите первое число: ";
	const std::string msg_num2 = "Введите второе число: ";
	const std::string msg_oper = "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";

	userIn(x, msg_num1);
	userIn(y, msg_num2);
	userIn(oper_num, msg_oper);

	switch (oper_num)
	{
		case id_oper::add:
			std::cout << x << " + " << y << " = " << 
				my_math::add(x, y) << std::endl;
			break;

		case id_oper::subtract:
			std::cout << x << " - " << y << " = " << 
				my_math::subtract(x, y) << std::endl;
			break;

		case id_oper::multiply:
			std::cout << x << " * " << y << " = " << 
				my_math::multiply(x, y) << std::endl;
			break;

		case id_oper::devide:
			while (y == 0)
			{
				userIn(y, msg_num2);
			}

			std::cout << x << " / " << y << " = " << 
				my_math::devide(x, y) << std::endl;
			break;

		case id_oper::exponentiation:
			std::cout << x << " в степени " << y << " = " << 
				my_math::exponentiation(x, y) << std::endl;
			break;
	}

	return 0;
}
