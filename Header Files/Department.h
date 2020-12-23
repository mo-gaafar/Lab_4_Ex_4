#ifndef DEPARTMENT_H
#define DEPARTMENT_H

class Department
{
private:
	int code;
	char* name;
public:
	Department();
	~Department();

	//Setters and getters
	int getCode() const;
	void setCode(int a);

	char* getName() const;
	void setName(char* a);

	void ReadData(); //Reads and sets dept data from user

	void PrintInfo(); //prints all info


};

#endif