#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Department.h"

class Employee
{
private:
	char name;
	int age;
	double salary;
	Department * Dep; //pointer data member (assoc)

public:

	Employee();
	~Employee();

	char * setName(const char* rName);
	void getName();



};


#endif