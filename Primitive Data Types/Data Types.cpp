// Primitive Data Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
    string name;
    char initial;
    short age;
    bool isAdult = true;
    int zipcode;
    float wage;
    unsigned short daysWorked;
    unsigned short hours[7];
    float TAX = 0.3f;
    int totalHours = 0;
    int grossIncome;
    int taxGrossIncome;
    int netIncome;

    std::cout << "enter first name: ";
    std::cin >> name;
    std::cout << "enter first initial of last name: ";
    std::cin >> initial;
    std::cout << "enter age: ";
    std::cin >> age;
    std::cout << "Enter zipcode: ";
    std::cin >> zipcode;
    std::cout << "enter the amount of days worked: ";
    std::cin >> daysWorked;
    std::cout << "enter wage: ";
    std::cin >> wage;


    for (int i = 0; i < daysWorked; i++)
    {
        std::cout << "enter hours worked for day " << ":";
        std::cin >> hours[i];
        totalHours += hours[i];
    }

    cout << "Total hours worked on the week:" << totalHours;
    grossIncome = totalHours * wage;
    cout << "\nGross income : " << grossIncome;

    taxGrossIncome = (grossIncome * TAX);
    netIncome = grossIncome - taxGrossIncome;
    cout << "\n net income: " << netIncome;


  if (isAdult >= 18) {
      isAdult = true;
      cout << "You are an adult.";
  }
  
  




}
