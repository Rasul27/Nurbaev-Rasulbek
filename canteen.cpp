/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    using namespace std;

    int A, B, N;

    // Input A, B, and N
    cout << "Enter the cost of a single pie in som (A): ";
    cin >> A;

    cout << "Enter the cost of a single pie in tyiyn (B): ";
    cin >> B;

    cout << "Enter the number of pies to be purchased (N): ";
    cin >> N;

    // Calculate entire cost
    int totalCostSom = A * N;
    int totalCostTyiyn = B * N;

    // Convert excess tyiyn to som
    totalCostSom += totalCostTyiyn / 100;
    totalCostTyiyn %= 100;

    // Output the result
    cout << "Total cost: " << totalCostSom << " som and " << totalCostTyiyn << " tyiyn." << endl;

    return 0;
}

