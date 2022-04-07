// Week_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

int main() {

	Employee employees[5];

	unsigned short numEmployees;
	std::cout << "Number of employees: ";
	std::cin >> numEmployees;

	for (int i = 0; i < numEmployees; i++);	{
		employees->Read();
	}

	for (int i = 0; i < numEmployees; i++); {
		employees->Write();
	}


// const int arraySize = 3;
//  Employee workers[3];
//  workers[0].Read(); // not a pointer
// (sizeof(workers) / sizeof(workers[0]));
//    std::cout << "\n size 2 = " << std::size(workers);
//    for (int count = 0; count < (sizeof(workers) / sizeof(workers[0])); count++) {
//      workers[count].Read();
//        }
//      for (int count = 0; count < (sizeof(workers) / sizeof(workers[0])); count++) {
//        workers[count].Write();
//  }
}


