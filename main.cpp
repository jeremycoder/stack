#include "stack.h"
#include "convert.h"
#include <iostream>
#include <string>


int myNum = 0, myBase = 0;


using namespace std;

int main ()
{
	convert convert;

	cout << endl;
	cout << "Enter the number to convert: ";
	cin >> myNum;
	cout << "What base? Choose from 2 to 16: ";
	cin >> myBase;
		
	cout << convert.toBase(myNum, myBase) << endl;

	 	 
	return 0;


}