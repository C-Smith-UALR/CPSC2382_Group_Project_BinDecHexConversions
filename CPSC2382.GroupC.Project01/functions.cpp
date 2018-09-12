#include <iostream>
#include "functions.h"
#include <vector>


using std::cout;
using std::cin;
using std::vector;
using std::endl;

void convertDecToBin() {
	int userValue, temp, i, valueSave;


	cout << "Enter the value in base: \n";
	cin >> userValue;

	valueSave = userValue;

	std::vector<int>v;				//vector for storing the 1's and 0's of binary
	while (userValue > 0) {
		temp = userValue % 2;		//temp is either 1 or 0
		v.push_back(temp);			//store temp in vector
		userValue /= 2;
	}

	std::vector<int>::reverse_iterator it;   //reverse iterator so that the digits are printed in reverse

	cout << valueSave << " in base 10 is equal to ";

	for (it = v.rbegin(); it != v.rend(); ++it) {
		cout << *it;							//dereferencing the iterator prints 1 or 0;
	}

	cout << " in base 2.\n\n\n";

	system("PAUSE");

}

void convertDecToHex() {

	//FIXME:  code here for converting Decimal to Hex
}

void convertBinToDec() {

	//FIXME:  code here for converting Binary to Decimal
}

void convertBinToHex() {
	//FIXME:  code here for converting Binary to Hexadecimal

}

void convertHexToDec() {

	//FIXME:  code here for converting Hexadecimal to Decimal
}
void convertHexToBin() {
	//FIXME:  code here for converting Hexadecimal to Binary

}