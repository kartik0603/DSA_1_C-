/*
Write a Program to check whether a number is even or odd using the ternary operator. 
Also validate that 
- if user enter a number that is less than 0 will not be checked for even or odd, instead display a message that "Enter 0 or greater number".

*/


#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << " Enter Number \t:";
    cin >> num;

    (num % 2 ==0)
     ? cout <<" Number is EVEN" 
     : cout << "Number is ODD" ;

     return 0; 
}