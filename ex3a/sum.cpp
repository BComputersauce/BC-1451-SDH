#include <iostream>
using namespace std;

int main()
{
    int firstNumber,lastNumber, accumulatedNumber;
    cout << "Enter two numbers seperated by a space: ";
    cin >> firstNumber >> lastNumber;
    if (firstNumber > lastNumber)
    {
        swap(firstNumber,lastNumber);
    }
    accumulatedNumber=0;
    for( int a = firstNumber; a < lastNumber+1; a++ )
    {
      accumulatedNumber=accumulatedNumber+a;
    }
    cout << "Sum of values from " << firstNumber << " through " << lastNumber << " is: " << endl;
    cout << firstNumber; // output thus first so that it displays before the + sign
    for( int a = firstNumber+1; a < lastNumber +1; a++ ) // add 1 to the variables to display x + x + X + x ...
    {
        cout << " + " << a;
    }
    cout << " = " << accumulatedNumber << "\n";
}
