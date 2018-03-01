#include "stack.h"
#include <iostream>

using namespace std;

int myStack[31];
int top = -1;
int num = 0;

void stack::push(int x)
{
	top++;
	myStack[top] = x;
}

int stack::pop()
{
	num = myStack[top];
	top--;
	return num;
}

int stack::getTop()
{
	return top;
}

