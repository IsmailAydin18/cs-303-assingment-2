#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee
{
public:
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
	double const heathinsurance_pro = (salary_pro / 4) * 0.10;

	//messages out the monthly and weekly salary the profesional employee gets
	void prof_salaray();

	//messages out the monthly and weekly vaction the profesional employee gets
	void prof_vacation();

	//messages out the monthly and weekly insurance the profesional employee has to pay
	void prof_insurance();

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
	void salary(double hoursworked, double hourlyrate);

	//this is the equation for how much healthcare a non-professional employee has to pay per week, which is accroding to his weekly salary
	void healthcare();

	//this is the equation for how much vacation a non-professional employee gets, which is according to his hoursworked for that week
	void vacation(double hoursworked);
};
