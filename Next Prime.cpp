/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    using namespace std;

    int N;

    // Input a positive number N
    cout << "Enter a positive number (N): ";
    cin >> N;

    // Find the next prime number greater than N
    int nextPrime = N + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }

    // Output the result
    cout << "The next prime number greater than " << N << " is: " << nextPrime << endl;

    return 0;
}
