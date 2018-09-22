#include <iostream>
#include "functions.h"
#include <vector>
#include <string>


using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::string;

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
		int userVal, temp, saveVal;
		char myChar;

		cout << "Enter the value in base:  " << endl;
		cin >> userVal;

		saveVal = userVal;

		std::vector<char>decToHex;
		while (userVal > 0) {
			temp = userVal % 16;
			switch (temp) {							//convert temp val to char literal
			case 0:
				myChar = '0';
				break;
			case 1:
				myChar = '1';
				break;
			case 2:
				myChar = '2';
				break;
			case 3:
				myChar = '3';
				break;
			case 4:
				myChar = '4';
				break;
			case 5:
				myChar = '5';
				break;
			case 6:
				myChar = '6';
				break;
			case 7:
				myChar = '7';
				break;
			case 8:
				myChar = '8';
				break;
			case 9:
				myChar = '9';
				break;
			case 10:
				myChar = 'A';
				break;
			case 11:
				myChar = 'B';
				break;
			case 12:
				myChar = 'C';
				break;
			case 13:
				myChar = 'D';
				break;
			case 14:
				myChar = 'E';
				break;
			case 15:
				myChar = 'F';
				break;
			default:
				break;

			}

			decToHex.push_back(myChar);				//store char literal in vector
			userVal /= 16;
		}

		std::vector<char>::reverse_iterator it;				//reverse iterator to print in reverse
		cout << saveVal << " in base 10 is equal to ";

		for (it = decToHex.rbegin(); it != decToHex.rend(); it++) {
			cout << *it;									//dereference iterator prints out char literal
		}
		cout << " in hexadecimal" << endl;


		system("pause");
		system("cls");
		
	}


void convertBinToDec() {

	string binary = "";
	cout << "Enter value in binary: " << endl;			//get binary input as a string
	cin >> binary;

	int length = binary.length();					//get length of string
	int sum = 0;

	for (int i = 1; i <= length; ++i) {
		if (binary.at(length - i) == '1') {			//evaluate string at each location starting at furthest to the right
			int temp = pow(2, i - 1);				//if string is 1 calculate power i - 1 then add to sum to get decimal value
			sum += temp;
		}
	}

	cout << binary << " in binary is " << sum << " in base 10." << endl;		//cout sum of decimal value
	system("pause");
	system("cls");
}

void convertBinToHex() {
	//FIXME:  code here for converting Binary to Hexadecimal

}

void convertHexToDec() 
{
	string userHexString;
	cout << "Enter number in hexadecimal (enter letters in UPPER CASE): \n";
	cin >> userHexString;

	long myResult=0;
	for (int i = 0; i < userHexString.length(); i++) {
		if (userHexString[i] <= 57 && userHexString[i] >= 48) {
			myResult += (userHexString[i] - 48)*pow(16, userHexString.length() - i - 1);
		}
		else if (userHexString[i] >= 65 && userHexString[i] <= 70) {
			myResult += (userHexString[i] - 55)*pow(16, userHexString.length() - i - 1);
		}
	}

	cout << userHexString << " in base 10 is " << myResult << "\n";
	system("PAUSE");
	
}
void convertHexToBin() {
	//FIXME:  code here for converting Hexadecimal to Binary

}