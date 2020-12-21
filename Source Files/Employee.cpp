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
char * Employee::setName(const char* rName)
{

}