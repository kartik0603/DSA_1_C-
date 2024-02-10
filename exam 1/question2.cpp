/*

Write a Program to find the minimum number from the given 3 numbers using nested if else. 
Also validate that 
- if all numbers are same, then no minimum value can be displayed.
- if any two numbers are same, then display appropriate message

*/




#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "  Enter A :" << endl;
    cin >> a ;

    cout << "  Enter B :" << endl;
    cin >> b ;

    cout << "  Enter C :" << endl;
    cin >> c ;

    if (a == b && b == c && c == a)
    {
        cout << " Enter Values Are same";
    }
    else
    {
        if (a < b)
        {
            if (a < c)
            {
                cout << " A is Minimum ";
            }
            else
            {
                cout << " C is Minimum ";
            }
        }
        else
        {
            if (b < c)
            {
                cout << "B is Minimum ";
            }
            else
            {
                cout << "C is Minimum ";
            }
        }
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter A :" << endl;
//     cin >> a;

//     cout << "Enter B :" << endl;
//     cin >> b;

//     cout << "Enter C :" << endl;
//     cin >> c;

//     if (a == b && b == c) {
//         cout << "Entered values are the same";
//     } else {
//         if (a < b && a < c) {
//             cout << "A is Minimum ";
//         } else if (b < c) {
//             cout << "B is Minimum ";
//         } else {
//             cout << "C is Minimum ";
//         }
//     }

//     return 0;
// }
