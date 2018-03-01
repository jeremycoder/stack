#include "convert.h"
#include "stack.h"
#include <iostream>
#include <string>

using namespace std;

string result = "";
stack myStack;
int myTop = 0;
int temp = 0;

std::string convert::toBase(int number, int base)
{
	while (number > 0)
	{
		myStack.push(number % base);
		number = number / base;
	}

	myTop = myStack.getTop();

	while (myTop > -1)
	{
		temp = myStack.pop();
		
		if (temp == 10)
			result = result + "A";
		else if (temp == 11)
			result = result + "B";
		else if (temp == 12)
			result = result + "C";
		else if (temp == 13)
			result = result + "D";
		else if (temp == 14)
			result = result + "E";
		else if (temp == 15)
			result = result + "F";
		else
			result = result + to_string(temp);

		myTop--;
	}

	if (base == 2)
		result = result + "b";

	if (base == 16)
		result = result + "h";

	return result;
}