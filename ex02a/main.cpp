#include <iostream>

using namespace std;

// Prompt the user and let them enter three integers.
// Store them in three variables.
//Print the numbers in sorted order, from smallest to largest.

int main()
{
    double firstNumber, secondNumber, thirdNumber, tempNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter first number: ";
    cin >> secondNumber;
    cout << "Enter first number: ";
    cin >> thirdNumber;

    if (firstNumber > secondNumber)
        {
        tempNumber = firstNumber;
        firstNumber = secondNumber;
        secondNumber = tempNumber;
        }
    if (secondNumber > thirdNumber)
        {
        tempNumber = secondNumber;
        secondNumber = thirdNumber;
        thirdNumber = tempNumber;
        }
    if (firstNumber > secondNumber)
        {
        tempNumber = firstNumber;
        firstNumber = secondNumber;
        secondNumber = tempNumber;
        }
    cout << "Sorted: " << " <= " << firstNumber << " <= " << secondNumber << " <= " << thirdNumber;
    return 0;
}
