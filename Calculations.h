#pragma once

class Calculations
{
public:
	int calculate(int x, char op, int y)
	{
		switch (op)
		{
		case'*':
			return x * y;
			break;
		case'/':
			return x / y;
			break;
		case'-':
			return x - y;
			break;
		case'+':
			return x + y;
			break;
		default:
			return NULL;
			break;
		}
	}
};
