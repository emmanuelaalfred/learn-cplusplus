# Student Grade Assignment

Given the following function prototypes and corresponding main body code segment, complete the function definitions.

## Function prototypes

```cpp
// Function prototypes
void FillList(char grades[], int size);
char GetLowestGrade(char grades[], int size);
void UpGradesByOne(char grades[], int size);
```

## Main Body

```cpp
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
```

## Development Journal

Notiable errors I enouter and fixed.

```txt
Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2019	unresolved external symbol main referenced in function "int __cdecl invoke_main(void)" (?invoke_main@@YAHXZ)	StudentGradeAssignment	C:\Users\k00280835\source\repos\learn-cplusplus\StudentGradeAssignment\MSVCRTD.lib(exe_main.obj)	1	
```

Problem was caused by the main function being `Main()` . Solution was lower case main.

```cpp
int main()
{
/* ... */
}
```