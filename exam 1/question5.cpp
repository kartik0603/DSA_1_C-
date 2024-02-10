/*
Write a Program to create a menu-driven program for create a Calculator's functionality.
*/

#include <iostream>
using namespace std;

int main()
{

    double num1, num2, result;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << " Press 1 for Addition (+) \t:" << endl;

    cout << " Press 2 for sutractio (-) \t:" << endl;

    cout << " Press 3 for Multiplication (*)\t:" << endl;

    cout << " Press 4 for Division (/)\t:" << endl;

    cout << " Press 6 for Modulus (%)\t:" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "Result: " << result;
        break;

    case 2:
        result = num1 - num2;
        cout << "Result: " << result;
        break;

    case 3:
        result = num1 * num2;
        cout << "Result: " << result;
        break;

    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "Result: " << result;
        }
        else
        {
            cout << "Cannot divided by 0 (zero)";
        }
        break;

    case 5:

        result = (num1 % num2);
        cout << "Result:" << result;
        break;

    default:
        cout << "Invalid choice";
    }
    return 0;
}