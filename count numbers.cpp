/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    using namespace std;

    int N;

    // Input the number of elements
    cout << "Enter the number of elements (N): ";
    cin >> N;

    // Input the N numbers
    cout << "Enter " << N << " numbers: ";
    
    int odds = 0;
    int evens = 0;
    
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;

        // Check if the number is even or odd
        if (num % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }

    // Output the results
    cout << "Odds: " << odds << endl;
    cout << "Evens: " << evens << endl;

    return 0;
}
