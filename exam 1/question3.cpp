
/*
Write a Program to Swap two character variables using the third variable without using any function.
Also validate that
- if a user enter any one of the character that is greater than 'M', then display a message "Enter a character less than 'M' "

*/




#include <iostream>
using namespace std;

int main() {
    char first, second, temp;

    cout << "Enter first character: ";
    cin >> first;


    if (first > 'M') {
        cout << "Enter a character less than 'M'." << endl;
        return 1; 
    }

    cout << "Enter second character: ";
    cin >> second;


    if (second > 'M') {
        cout << "Enter a character less than 'M'." << endl;
        return 1;
    }



    temp = first;
    first = second;
    second = temp;

     cout << "After swapping:: " << first << second << endl;

 

    return 0;
}
