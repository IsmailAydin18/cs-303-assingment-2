#include<iostream>
#include<string>
#include <array>
#include "Header.h"
using namespace std;

//this is the equation for how much salary a non-professional employee gets
void nonprofessional::salary(double hoursworked, double hourlyrate) 
{
	weeklysalary = hourlyrate * hoursworked;
	cout << "Weekly salary earned this week is " << weeklysalary << endl;
}

//this is the equation for how much healthcare a non-professional employee has to pay per week, which is accroding to his weekly salary
void nonprofessional::healthcare()
{
	weeklyhealthcare = weeklysalary * 0.15;
	cout << "Amount contributed to healthcare for this week: " << weeklyhealthcare << endl;
}

//this is the equation for how much vacation a non-professional employee gets, which is according to his hoursworked for that week
void nonprofessional::vacation(double hoursworked)
{
	weeklyvacationdays = (hoursworked * 1.5) / 24;
	cout << "Amount of vacation days earned for this week: " << round(weeklyvacationdays) << " days" << endl;
}

//messages out the monthly and weekly salary the profesional employee gets
void professional::prof_salaray()
{
	cout << "weekly salary is: " << salary_pro / 4 << endl;
	cout << "Monthly salary is: " << salary_pro << endl;
}

//messages out the monthly and weekly vaction the profesional employee gets
void professional::prof_vacation()
{
	cout << "weekly vacation is: " << vacation_pro << " days" << endl;
	cout << "Monthly vacation is: " << vacation_pro * 4 << " days" << endl;
}

//messages out the monthly and weekly insurance the profesional employee has to pay
void professional::prof_insurance()
{
	cout << "Amount contributed to healthcare this week: " << heathinsurance_pro << endl;
	cout << "Amount contributed to healthcare this month: " << heathinsurance_pro * 4 << endl;
}
