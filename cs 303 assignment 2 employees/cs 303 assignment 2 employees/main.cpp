#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>
#include "Header.h"
#include <functional>
using namespace std;

//the main class
class Employee 
{
public:
	//data members
	//information common to all employees
	string company_name = "Joe's Contruction Company";
	string company_adress = "5288 Happy Avenue, kCMO 64120";

};

// Derived class for professional employees
class professional : public Employee 
{
public:
	//proffesional
	//since all professional employees have constant salary, constant vacation, and healthinsurance, all of the professional variables are constant
	double const salary_pro = 8000;
	double const vacation_pro = 2;
	double const heathinsurance_pro = (salary_pro/4) * 0.10;

	//messages out the monthly and weekly salary the profesional employee gets
	void prof_salaray() {
		cout << "weekly salary is: " << salary_pro/4 << endl;
		cout << "Monthly salary is: " << salary_pro << endl;
	}

	//messages out the monthly and weekly vaction the profesional employee gets
	void prof_vacation() {
		cout << "weekly vacation is: " << vacation_pro << " days" << endl;
		cout << "Monthly vacation is: " << vacation_pro*4 << " days" << endl;
	}

	//messages out the monthly and weekly insurance the profesional employee has to pay
	void prof_insurance() {
		cout << "Amount contributed to healthcare this week: " << heathinsurance_pro << endl;
		cout << "Amount contributed to healthcare this month: " << heathinsurance_pro*4 << endl;
	}
	
};

// Derived class for non-professional employees
class nonprofessional : public Employee
{
public:
	
	double weeklysalary;
	double weeklyhealthcare;
	double weeklyvacationdays;

	//member functions
	//this is the equation for how much salary a non-professional employee gets
	void salary(double hoursworked, double hourlyrate)
	{
		weeklysalary = hourlyrate * hoursworked;
		cout << "Weekly salary earned this week is " << weeklysalary << endl;;
	}

	//this is the equation for how much healthcare a non-professional employee has to pay per week, which is accroding to his weekly salary
	void healthcare()
	{
		weeklyhealthcare = weeklysalary * 0.15;
		cout << "Amount contributed to healthcare for this week: " << weeklyhealthcare << endl;
	}

	////this is the equation for how much vacation a non-professional employee gets, which is according to his hoursworked for that week
	void vacation(double hoursworked)
	{
		weeklyvacationdays = (hoursworked * 1.5) / 24;
		cout << "Amount of vacation days earned for this week: " << round(weeklyvacationdays) << " days" << endl;
	}
};


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