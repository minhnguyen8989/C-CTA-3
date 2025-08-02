#include <iostream>
using namespace std;

int main() {
    int interger_1, interger_2, interger_3;

    cout << "Enter first integer: ";
    cin >> interger_1;

    cout << "Enter second integer: ";
    cin >> interger_2;

    cout << "Enter third integer: ";
    cin >> interger_3;

    // Pointers for each variable
    int* ptrA = new int(interger_1);
    int* ptrB = new int(interger_2);
    int* ptrC = new int(interger_3);

    // Display the values stored in the variables
    cout << "\nValues of the variables:\n";
    cout << "Interer #1 = " << interger_1 << "\n";
    cout << "Interer #2 = " << interger_2 << "\n";
    cout << "Interer #3 = " << interger_3 << "\n";

    // Display the values using the pointers
    cout << "\nValues using pointers:\n";
    cout << "*poiter #1 = " << *ptrA << "\n";
    cout << "*poiter #2 = " << *ptrB << "\n";
    cout << "*poiter #3 = " << *ptrC << "\n";

    // Delete operators to management memory
    delete ptrA;
    delete ptrB;
    delete ptrC;

    // Set pointers to nullptr for safety
    ptrA = nullptr;
    ptrB = nullptr;
    ptrC = nullptr;

    return 0;
}
