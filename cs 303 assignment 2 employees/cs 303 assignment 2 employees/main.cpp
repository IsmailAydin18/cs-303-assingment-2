#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>
#include "Header.h"
#include <functional>
using namespace std;


int main() {
	//instances
	professional output;
	nonprofessional output_1;
	double a{}, b{};
	//names out the common informatiion for both kinds of employees
	cout << "Name of the company: " << output.company_name << endl;
	cout << "Adress of the company: " << output.company_adress << endl;
	//asks for how much hours the non-profesinal employees worked for the week
	cout << "Hours worked during the week: ";
	cin >> a;
	//asks for the hourly rate
	cout << "Hourly rate: ";
	cin >> b;
	//prints out the information for non-professional employees, including salary,healthcare, and vaction days earned for that week
	cout << "Information for non-professional employees" << endl;
	output_1.salary(a,b);
	output_1.healthcare();
	output_1.vacation(a);
	cout << endl;
	//prints out information for professional employees, since they have a constant salary, healthcare contribution and vacation days, there is no need for equations or user input
	cout << "Information for professional employees" << endl;
	output.prof_salaray();
	output.prof_vacation();
	output.prof_insurance();

	return 0;
}
