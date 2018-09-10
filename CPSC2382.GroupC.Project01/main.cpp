/*
CPSC 2382
September 2018

Group C:
Caroline Azzone		FIXME:  enter T number
Clark Smith			T00642044
Tiger Nguyen		FIXME:  enter T number


A program that converts among various bases.  
*/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int getUserInput();	
void convertDecToBin();         //function declarations 
void convertDecToHex();
void convertBinToDec();
void convertBinToHex();
void convertHexToDec();
void convertHexToBin();


int main() {					// main function
	enum CHOICE { DEC_BIN, DEC_HEX, BIN_DEC, BIN_HEX, HEX_DEC, HEX_BIN, QUIT };

	CHOICE choice;

	do {
		choice = (CHOICE)getUserInput();

		switch (choice)
		{
		case DEC_BIN:
			convertDecToBin();
			break;
		case DEC_HEX:
			convertDecToHex();
			break;
		case BIN_DEC:
			convertBinToDec();
			break;
		case BIN_HEX:
			convertBinToHex();
			break;
		case HEX_DEC:
			convertHexToDec();
			break;
		case HEX_BIN:
			convertHexToBin();
			break;
		default:
			cout << "Invalid selection\n";
			break;
		}
		





		} while (choice != QUIT);

		system("PAUSE");

		return 0;



	

}


int getUserInput() {
	int baseSystem, targetSystem;			//this function is a series of nested switch statments that
	system("CLS");							//obtains the desired systems from the user

	do {
		cout << "Enter the base number system: \n";
		cin >> baseSystem;
		if (baseSystem != 2 && baseSystem != 10 && baseSystem != 16) {
			cout << "Please enter a valid option: \n";
			system("PAUSE");
			system("CLS");
		}
	} while (baseSystem != 2 && baseSystem != 10 && baseSystem != 16);

	do {
		cout << "Enter the target number system: \n";
		cin >> targetSystem;
		if (targetSystem != 2 && targetSystem != 10 && targetSystem != 16) {
			cout << "Please enter a valid option: \n";
			system("PAUSE");
			system("CLS");
		}
	} while (targetSystem != 2 && targetSystem != 10 && targetSystem != 16);

	switch (baseSystem)
	{
	case 2:
	{
		switch (targetSystem) {
		case 10:
			return 2;
			break;
		case 16:
			return 3;
			break;
		default: {
			cout << "Invalid choice\n";
			system("PAUSE");
			return 6;
		}
		}
	}
	break;

	case 10:
	{
		switch (targetSystem) {
		case 2:
			return 0;
			break;
		case 16:
			return 1;
			break;
		default: {
			cout << "Invalid choice\n";
			system("PAUSE");
			return 6;
		}
		}


	}
	break;

	case 16:
	{
		switch (targetSystem) {
		case 2:
			return 5;
			break;
		case 10:
			return 4;
			break;
		default: {
			cout << "Invalid choice\n";
			system("PAUSE");
			return 6;
		}
		}


	}
	break;

	default: {
		cout << "Invalid choice\n";
		system("PAUSE");
		return 6;

	}
	}

}

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