/*
CPSC 2382
September 2018

Group C:
Caroline Azzone		T00295400
Clark Smith			T00642044
Tiger Nguyen		FIXME:  enter T number


A program that converts among various bases.  
*/

#include <iostream>
#include <vector>
#include "functions.h"
#include <string>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::string;

int main() {					// main function
	
	while(true){
		
		cout << "Please enter starting base or 0 to quit: " << endl;
		int startingBase;
		cin >> startingBase;
		cout << endl;

		if (startingBase == 0) {
			return 0;
		}

		cout << "Please enter target base: " << endl;
		int targetBase;
		cin >> targetBase;
		cout << endl;

		int decimalVal;
		string stringIn = "";
		cout << "Please enter value in base " << startingBase << ": " << endl;

		if (startingBase == 10) {
			cin >> decimalVal;
			cout << decimalVal << " in base " << startingBase << " is ";
		}
		else {
			cin >> stringIn;

			switch (startingBase) {
			case 2:
				decimalVal = convertBinToDec(stringIn);
				cout << stringIn << " in base " << startingBase << " is ";
				break;
			case 16:
				decimalVal = convertHexToDec(stringIn);
				cout << stringIn << " in base " << startingBase << " is ";
				break;
			default:
				cout << "Error. Please try again." << endl;
				break;
			}
		}

		string stringOut = "";
		switch (targetBase) {
		case 2:
			stringOut = convertDecToBin(decimalVal);
			cout << stringOut << " in base " << targetBase << endl;
			break;
		case 10:
			cout << decimalVal << " in base " << targetBase << endl;
			break;
		case 16:
			stringOut = convertDecToHex(decimalVal);
			cout << stringOut << " in base " << targetBase << endl;
			break;
		default:
			cout << "Error. Please try again." << endl;
			break;
		}
	} 

	system("PAUSE");
	system("CLS");
	return 0;
}
