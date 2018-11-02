#include <iomanip>
#include <iostream>
using namespace std;

//get a set of integers from user until 0 is entered
//print out the number of positive values
//print out the number of negative values
//calculate and print out the sum of the input values
//calculate and print out the average (to two decimal places) of the input values



int main()
{
    float number,posNumbers=0,negNumbers=0,accNumber=0,numbersIn=0,avgNumber;
    while (number != 0)
    {
        cout << "Enter an integer (0 to stop): ";
        cin >> number;
        if (number > 0)
        {
            posNumbers++;
            accNumber=accNumber+number;
            numbersIn++;
        }
        if (number < 0) {
            negNumbers++;
            accNumber=accNumber+number;
            numbersIn++;
        }
    }
    cout << endl << "# of positives = " << posNumbers << endl;
    cout << "# of negatives = " << negNumbers << endl;
    cout << "Sum = " << accNumber << endl;
    avgNumber=accNumber/numbersIn;
    cout << "Average = " << fixed << setprecision(2) << avgNumber << endl;
    return 0;
}
