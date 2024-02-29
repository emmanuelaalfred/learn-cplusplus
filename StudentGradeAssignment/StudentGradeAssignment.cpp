// StudentGradeAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function prototypes
void FillList(char grades[], int size);
char GetLowestGrade(char grades[], int size);
void UpGradesByOne(char grades[], int size);
int Main();

int Main()
{
	const int size = 6;
	char grades[size];
	FillList(grades, size);

	for (int index = 0; index < size; index++)
		cout << grades[index] << endl;

	char lowest = GetLowestGrade(grades, size);

	cout << endl << lowest << "is the lowest grade \n" << endl;

	UpGradesByOne(grades, size);

	cout << "\nrevised grades are: " << endl;

	for (int index = 0; index < size; index++)
		cout << grades[index] << endl;

	return 0;
}

/// <summary>
/// Fill an array of grades
/// </summary>
/// <param name="grades"></param>
/// <param name="size"></param>
void FillList(char grades[], int size) {
	cout << "Please enter " << size << " grades." << endl;
	for (int index = 0; index < size; index++)
		cin >> grades[index];
	}


char GetLowestGrade(char grades[], int size) {
	// write function definition here to return the lowest
	// grade in the array (Note: F is Lower than A)
	return 'F';
}

void UpGradesByOne(char grades[], int size) {
	// write function definition here to increase each
	// character grade by one except for an A grade which
	// is the highest grade possible
}