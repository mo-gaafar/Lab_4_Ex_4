#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	cout << "Employee Constructor is called" << endl;
}
Employee::~Employee()
{
	cout << "Employee Destructor is called" << endl;
}
void Employee::setName(char* rName)
{

}
char * Employee::getName()
{
	return name; //How to return the name ????
}

void Employee::setAge(int rAge)
{
	age = rAge;
}

int Employee::getAge()
{
	return age;
}

void Employee::setSalary(double rSalary)
{
	salary = rSalary;
}

double Employee::getSalary()
{
	return salary;
}

void Employee::Leave(Department* a)
{
	//How to make an employee leave a department hes associated with?
}

void Employee::Join(Department* a)
{
	//How to change the department associated with the employee?
}

void Employee::ReadData()
{
	char rName;
	int rAge;
	double rSalary;

	cout << "Please enter employee name: ";
	cin >> rName; //how to input a char????

	cout << endl << "Please enter employee age: ";
	cin >> rAge;
	cout << endl << "Please enter employee Salary";
	cin >> rSalary;

	name = rName;
	salary = rSalary;
	age = rAge;
}

void Employee::PrintInfo()
{
	cout << endl << " Employee Name: " << name << endl;
	cout << "Department: " << Dep << endl; // pointer to department???
	cout << "Age: " << age << endl;
	cout << "Salary: " << salary << endl;
}