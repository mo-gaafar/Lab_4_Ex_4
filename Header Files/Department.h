#ifndef DEPARTMENT_H
#define DEPARTMENT_H

class Department
{
private: 
	int code;
	char name[100];
public:
	Department();
	~Department();

	//Setters and getters
	int getCode() const;
	void setCode(int a);

	int getName() const;
	void setName();

	int ReadData(int c, int n); //Reads and sets dept data from user

	void PrintInfo(); //prints all info


};