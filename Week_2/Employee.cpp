#include "Employee.h"
#include <string.h>
#include <iostream>

float totalHours = 0;
float grossIncome;
float netIncome;
float taxedIncome;


// ///////////////////////////////////////////////////
Employee::Employee() {
	memset(this->name, '\0', sizeof(this->name));
    const float TAX = 0.03f;
};

// ///////////////////////////////////////////////////
void Employee::Read() {
    std::cout << "enter first name: ";
    std::cin >> name;
    std::cout << "\nenter age: ";
    std::cin >> age;
    std::cout << "\nEnter zipcode: ";
    std::cin >> zipCode;
    std::cout << "\nenter the amount of days worked: ";
    std::cin >> daysWorked;
    std::cout << "\nenter wage: ";
    std::cin >> wage;
    

    for (int i = 0; i < daysWorked; i++)
    {
        std::cout << "\nenter hours worked for day " << ":";
        std::cin >> hours[i];
        totalHours += hours[i];
    }

    grossIncome = totalHours * wage;

    taxedIncome = (grossIncome * TAX);
    netIncome = grossIncome - taxedIncome;
  
};

// ///////////////////////////////////////////////////
void Employee::Write() {
    // Write all the data for the person
    std::cout << "\nName: " << name;
    std::cout << "\nAge: " << age;
    std::cout << "\nZipCode: " << zipCode;
    std::cout << "\nTotal Days worked: " << daysWorked;
    std::cout << "\nHourly Wage: " << wage;
    std::cout << "\nTotal Hours: " << totalHours;
    std::cout << "\nGross Income: " << grossIncome;
    std::cout << "\nNet Income: " << netIncome;

};