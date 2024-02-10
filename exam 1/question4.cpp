/*
Write a Program to find total bill by adding % of GST of user choice.
For example,
Input:
Enter Base Amount: 5000
Enter GST% =18

Output:
Total Bill Amount = 5900


*/



#include <iostream>
using namespace std;

int main() {
    int amount, gst, bill;

    cout << "Enter Bill Amount: ";
    cin >> amount;

    cout << "Enter GST %: ";
    cin >> gst;

    float gst_amount = amount * gst / 100.0;

    
    bill = amount + gst_amount;

    cout << "Your Final Bill After GST: " << bill << endl;

    return 0;
}
