#include <iostream>
#include "Calculations.h"

using namespace std;

class Calculations calculations;

int GetInput();

int num1;
int num2;

int main()
{
	char op;
	num1 = GetInput();
	cout << "Please enter an operator: ";
	cin >> op;
	num2 = GetInput();

	cout << num1 << op << num2 << " = " << calculations.calculate(num1, op, num2) << endl;

	system("pause");
	return 0;
}

int GetInput()
{
	int input;
	cout << "Please enter a number: ";
	cin >> input;
	return input;
}
