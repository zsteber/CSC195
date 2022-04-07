#pragma once

const unsigned short maxDays = 7;

class Employee
{
public: 
	
	

protected:


private:
	
	const float TAX = 0.03f;
	char name[31]; // array of char 30 long w/null terminator
	int age = 0;
	double zipCode;
	float wage;
	unsigned short daysWorked;
	unsigned short hours[maxDays];


public: 
	Employee();
	void Read();
	void Write();


};

