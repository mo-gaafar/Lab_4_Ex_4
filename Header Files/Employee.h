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

	//im unsure about the input and output arguments
	void setName(char* rName);
	char* getName();

	void setAge(int rAge);
	int getAge();

	void setSalary(double rSalary);
	double getSalary();

	void Join(Department* a);
	void Leave(Department* a);

	void ReadData();

	void PrintInfo();





};


#endif