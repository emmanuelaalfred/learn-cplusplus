// StudentGradeAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function prototypes
void FillList(char grades[], int size);
void PrintGrades(char grades[], int size);
char GetLowestGrade(char grades[], int size);
void UpGradesByOne(char grades[], int size);


int main()
{
	const int size = 5;
	char grades[size] = { 'A', 'B', 'F', 'B', 'C' };
	// FillList(grades, size);

	PrintGrades(grades, size);

	char lowest = GetLowestGrade(grades, size);

	cout << endl << "The lowest grade is : " << lowest << endl;

	UpGradesByOne(grades, size);

	cout << "\nrevised grades are: " << endl;

	PrintGrades(grades, size);

	return 0;
}

void PrintGrades(char grades[], int size)
{
	for (int index = 0; index < size; index++)
		cout << grades[index] << endl;
}

/// <summary>
/// Fill an array of grades
/// </summary>
/// <param name="grades"></param>
/// <param name="size"></param>
void FillList(char grades[], int size) {
	cout << "Please enter " << size << " grades." << endl;
	for (int index = 0; index < size; index++)
	{
		cout << "Input grade #" << index + 1 << ": ";
		cin >> grades[index];
	}
}


char GetLowestGrade(char grades[], int size) {
	// write function definition here to return the lowest
	// grade in the array (Note: F is Lower than A)
	char lowestGrade = grades[0];
	for (int index = 1; index < size; index++)
	{
		if (grades[index] > lowestGrade) // > because B is less than A, but in ascii B is greater than A
			lowestGrade = grades[index];

	}
	return lowestGrade; 
}

void UpGradesByOne(char grades[], int size) {
	// write function definition here to increase each
	// character grade by one except for an A grade which
	// is the highest grade possible
}