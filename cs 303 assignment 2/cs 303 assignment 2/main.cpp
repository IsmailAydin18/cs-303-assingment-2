#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept>
#include "Header.h"
using namespace std;

int main()
{
	const int amount = 50;
	double list[amount];
	int num{};
	int select{};
	double addnumber;
	double check1;
	double remove1;
	double modify1;
	double num2{};
	int inside;

	//reads the file using ifstream
	ifstream number;
	//opens the file
	number.open("numbers.txt");
	//while the file is good, then every number inside the file gets read into the array using for loop
	while (number.good())
	{
		for (int i = 0; i < amount; i++) {
			number >> list[i];
		}
	}

	//while the following is true, then the selected choices by the user occuer
	while (true) {

		//if the user selects 1, then the program checks the number that the user wants and tells which index it's at, if its not there then it dosnt show it.
		if (select == 1)
		{
			check1 = check(num, list, amount);

		}
		//if user selects 2, then the program modifys the selected index with the new number given
		if (select == 2) 
		{
			modify1 = modify(num, num2, list, amount);
		}
		//if user selects 3, then a new number is inserted to the end of the array
		if (select == 3) {
			addnumber = newint(num, list, amount);
		}
		//if user selects 4, then the program delets an index from the array that the user chooses
		if (select == 4) {
			remove1 = remove(num, list, amount);
		}
		//if user selects 5, then the program ends.
		if (select == 5) {
			break;
		}
		//this here is to make sure the user can choose 1,2,3,4 over and over, until the user chooses 5 which ends the program
		if (select != 1 || select != 2 || select != 3 || select != 4 || select != 5)
		{
			cout << "Please pick one of the following" << endl;
			cout << "1:Check number" << endl;
			cout << "2:Replace number" << endl;
			cout << "3:Add number" << endl;
			cout << "4:Remove number" << endl;
			cout << "5:Quite" << endl;
			cin >> select;
		}
	}
	return 0;
}