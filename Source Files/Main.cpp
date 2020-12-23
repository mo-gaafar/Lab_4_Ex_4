#include <iostream>
#include "Employee.h"
#include "Department.h"
using namespace std;

/*Write a main function and do the following:
a. Create an employee object E1 and reads his data
b. Create an employee object E2 and reads his data
c. Create an employee object E3 and reads his data
d. Create a department object D1 and reads its data (make its code = 10)
e. Create a department object D2 and reads its data (make its code = 20)
f. Make E1 join D1
g. Make E2 join D2
h. Make E3 join D1
i. Print the information of E1 and E2 and E3
j. CountEmployees that works in department code 10
k. CountEmployees that works in department code 30
l. Make E1 leave D1
m. CountEmployees that works in department code 10
n. Print the information of E1 and E2 and E3
What is the order of creation and deletion of the classes in this exercise?*/

void main()
{
	Employee E1;
	E1.ReadData();
	Employee E2;
	E2.ReadData();
	Employee E3;
	E3.ReadData();

	Department D1;
	D1.ReadData();
	Department D2;
	D2.ReadData();

	E1.Join(D1);
	E2.Join(D2);
	E3.Join(D1);

	E1.PrintInfo();
	E2.PrintInfo();
	E3.PrintInfo();
	
	D1.getCode();
	D2.getCode();

	E1.Leave(D1);

	return;
}