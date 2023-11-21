/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    using namespace std;

    int ticketNumber;

    // Input ticket number
    cout << "Enter the six-digit ticket number: ";
    cin >> ticketNumber;

    // Extracting individual digits
    int digit1 = ticketNumber / 100000 % 10;
    int digit2 = ticketNumber / 10000 % 10;
    int digit3 = ticketNumber / 1000 % 10;
    int digit4 = ticketNumber / 100 % 10;
    int digit5 = ticketNumber / 10 % 10;
    int digit6 = ticketNumber % 10;

    // Check if the ticket is lucky
    if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
