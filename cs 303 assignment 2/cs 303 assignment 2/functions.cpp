#include<iostream>
#include<string>
#include <array>
#include <stdexcept>
#include "Header.h"
using namespace std;


//this function is to find the number the user asks for.
double check(double num, double list[], int inarr)
{
	//this for loop here is to make sure that when a numbers gets inserted this function here
	//can know that the number exists in the array because without this for loop if a new number that was inserted gets
	//searched for, then this function wont be able to find the index its located at.
	int store;
	for (store = 0; store < list[inarr]; store++)
	{
		list[store] = store;
		inarr++;
	}
	//asks the user for what number to find
	cout << "What number do you want to find: ";
	cin >> num;
	//in a for loop the function searches the array and if the number is foudn then, it gives a message and tells which index the number is located at
	for (int i = 0; i < inarr; i++)
	{
		//if the index is equal to the number given by user ,then a message will be displayed
		if (list[i] == num)
		{
			cout << "Number index found at " << i << endl;
		}
	}
	//if the given number by the user is not found then, the function will return -1
	for (int i = 0; i < inarr; i++)
	{
		if (list[i] != num)
		{
			return -1;
		}
	}
	return 0;
}

//this function modify's the index that the user wants
double modify(double num, double num2, double list[], int inarr)
{
	//this for loop here is to make sure that when a numbers gets inserted this function here
	//can know that the number exists in the array because without this for loop if a new number that was inserted 
	//wants to be modifyed, then it wont be able to because it wont be able to find its index.
	int store;
	for (store = 0; store < list[inarr]; store++)
	{
		list[store] = store;
		inarr++;
	}

	try
	{
		//asks the user what index should be changed
		cout << "What index would like to change: ";
		cin >> num;
		
		//if num is not a number then a error is thrown
		if (cin.fail()) {

			throw 1;
		}
		//if the index that wants to be changed is bigger than the array, then a error is thrown
		if (num > inarr) {

			throw 2;
			cout << "Enter a number less than " << inarr << endl;
		}
		//if everything is fine then code proceeds with the new number thats going to be inserted
		else
		{
			//asks the user what number should the index be changed to 
			cout << "What is the new number: ";
			cin >> num2;
			//if num2 is not a number then another error is thrown inside else
			if (cin.fail()) {
				throw 3;
			}
			//if everything else is fine then the code proceeds with rest
			else {
				//the array is put in a for loop in order to find the index that wants to be changed, then i, which is the 
				//index, is equal the index that wants to be changed,num, then saying if both i and num are equal, so that only that number can be changed.
				//then making the index equal to the number 
				for (int i = num; i == num; i++)
				{
					list[i] = num2;
				}
				//lists out the new list after the change was implemented
				cout << "New list is:" << endl;
				for (int i = 0; i < inarr; i++)
				{
					cout << list[i] << endl;
				}
			}
		}
	}
	//cathces the errors and gives the message 'invalide input'
	catch (int x)
	{
		cout << "Invalid input" << endl;
		//clears the enterd input by the user and cin.ignore stops the program from looping
		cin.clear();
		cin.ignore(numeric_limits<int>::max(), '\n');
	}
	
	return 0;
}

//this function inserts a new number to the end of the array
double newint(double num, double list[], int inarr)
{
	//In order to add new number to the end of the array we have to increase the size of the array each time, so that the new number has a place in the array.
	// this for loop here increments the array by 1, so that when the new number is given by the user, that number can go to end of the array.
	int store;
	for (store = 0; store < list[inarr]; store++) {
		list[store] = store;
		inarr++;
	}

	try 
	{
		//Here it asks for new number that the user wants to increment
		cout << "Enter new number: ";
		cin >> num;
		//if the number is not a integer then it throws an error
		if (cin.fail()) {

			throw 1;
		}
		//else if everything is good, then proceeds with the rest of the code
		else 
		{
			//when the number is given by the user, the index of [inarr], which is equal to the highest index in the array, is made equal to the number given
			//by the user
			list[inarr] = num;
			//here we increment again beacuse even though the number is being added, we cant see it when its displayed, so in order for the number
			//to appear when we list it out we increment inarr again outside the for loop
			inarr++;
			//lists out new array
			cout << "New list is:" << endl;
			for (int i = 0; i < inarr; i++)
			{
				cout << list[i] << endl;
			}
		}
	}
	//cathces the error here, if it's anything other than a integer then gives the following message
	catch (int y) 
	{
		cout << "Invalid input, please enter a number" << endl;
		//clears the enterd input by the user and cin.ignore stops the program from looping
		cin.clear();
		cin.ignore(std::numeric_limits<int>::max(), '\n');
	}

	
	return 0;
}

//this function removes a index that the user wants
double remove(double num, double list[], int inarr)
{

	//int list2[inarr];
	int one = 1;
	//asks the user which index to remove
	cout << "What index would like to delete: ";
	cin >> num;
	//then the for loop here replaces each number by the next number starting from the index that wants to be deleted
	//and it keeps going until the end of array
	//that way the index that wants to be deleted is no longer in the array, and then at the end we shrink the size 
	//of the array 1, since there is no number at the end.
	for (int i = num; i < inarr; i++)
	{
		list[i] = list[i + 1];
	}
	//lists out the new array 
	cout << "New list is:" << endl;
	for (int i = 0; i < inarr; i++)
	{
		cout << list[i] << endl;
	}
	return 0;
}