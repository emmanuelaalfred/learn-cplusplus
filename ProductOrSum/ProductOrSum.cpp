// FDSA CA1 K00280835.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iomanip>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int Ans, choice, choice2;
    cout << "Do you want to get the Sum or Product of 4 numbers, Enter 1 for Sum and 0 for Product";
    cin >> Ans;
    if (Ans == 1)
    {
        cout << "Do you want to find the Sum of 234 or 4567? (234 is option 2 and 4567 is option 3)";
        cin >> choice;
        if (choice == 2)
        {
            cout << "The Sum of 234 is: 9\n";
        }
        else if (choice == 3)
        {
            cout << "The Sum of 4567 is: 22\n";
        }
    }
    else if (Ans == 0)
    {
        cout << "DO you want to find the Product of 1234 or 345 (1234 is choice 4 and 345 is choice 5)";
        cin >> choice2;
        if (choice2 == 4)
        {
            cout << "The Product of 1234 is: 23\n";
        }
        else if (choice2 == 5)
        {
            cout << "The Product of 345 is: 60\n";
        }

    }
    // Question 2
    int year, next1;
    cout << "Enter a year with 4 digits: \n";
    cin >> year;




    cout << "The next 20 leap years after the entered year are: \n";

    //Question 3
    int inte, dub;
    cout << "Enter 5 integers: \n";
    cin >> inte;
    cout << "Enter 5 doubles: \n";
    cin >> dub;

}


