// StudentGradeAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char grades[5];
	FillList(grades, 5);

	for (int index = 0; index < 5; index++)
		cout << grades[index] << endl;

	char lowest = GetLowestGrade(grades, 5);

	cout << endl << lowest << "is the lowest grade \n" << endl;

	UpGradesByOne(grades, 5);

	cout << "\nrevised grades are: " << endl;

	for (int index = 0; index < 5; index++)
		cout << grades[index] << endl;

	return 0;
}

void FillList(char grades[], int size) {
	// write function definition here to populate the array
	  
	
	// with five character values (capital letters only)
}


char GetLowestGrade(char grades[], int size) {
	// write function definition here to return the lowest
	// grade in the array (Note: F is Lower than A)
}

void UpGradesByOne(char grades[], int size) {
	// write function definition here to increase each
	// character grade by one except for an A grade which
	// is the highest grade possible
}