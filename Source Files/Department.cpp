#include "Department.h"
#include <iostream>
using namespace std;

Department::Department()
{
	cout << "Department Constructor is Called" << endl;
}

Department::~Department()
{
	cout << "Department Destructor is Called" << endl;
}

int Department::getCode() const
{
	return code;
}

void Department::setCode(int a)
{
	code = a;
}

void Department::setName(char * a)
{
//HOW TO SET A CHAR OF MAX CHARACTERS 100???
	if (name != NULL)
		delete[] name;
	int len = strlen(a) + 1;
	name = new char[len];
	strcpy_s(name, len, a);
}

char * Department::getName() const
{
	return name;
}

void Department::ReadData()
{
	char * inputName;
	int inputCode;
	cout << "Please enter department Name" << endl;
	cin >> inputName; //how to input char
	cout << endl << "Please enter department code" << endl;
	cin >> inputCode;

	*name = *inputName;
	code = inputCode;
}

void Department::PrintInfo()
{
	cout <<"Department Name: "<< getName() << endl;
	cout <<"Departmnent Code: "<< getCode() << endl;
}