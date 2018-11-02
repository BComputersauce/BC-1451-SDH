#include <iostream>
using namespace std;

int main ()
{
    const double airTime=1100,waterTime=4900,steelTime=16400; //declare constant variables
    char choice; //declare choice as a type char (only one character is required i.e., 'A', 'W, or 'S'
    double distance; //declare distance variable as type double
    string medium; //declare medium as string (this may only work on certain compilers)
    cout.precision(4); //set the number of decimal places for numeric outputs

    cout << "Welcome to Sound Wave Calculator." << endl;
    cout << endl;

    // Display a menu allowing the user to select air, water, or steel and
    // prompt the user and allow them to enter a choice.
    // User entry should be a character: 'A' for air, 'W' for water, and 'S' for steel.
    cout << "Select the medium the sound will travel through.\n\n";
    cout << "\tA\t" << "Air\n" << "\tW\t" << "Water\n" << "\tS\t" << "Steel\n" << endl;
    cin >> choice;

    // Allow both uppercase and lowercase as valid entries
    //If the user enters an invalid choice, print an appropriate error message and end the program.
    while (choice!='A' && choice!='W' && choice!='S' && choice!='a' && choice!='w' && choice!='s')
    {
        cout << "Invalid entry, try again: ";
        cin >> choice;
    }
    // For a valid choice, now ask the user to enter the distance that a sound wave will travel
    // through the selected medium.
    cout << "\nHow far will the sound wave travel (in feet) through the " << medium << "? " ;
    cin >> distance;

    //While the selected distance is negative, this is an invalid choice,
    //print an error message and end the program.
    while (distance < 1)
    {
        cout << endl << "Illegal entry. Aborting program." << endl;
        cout << "Goodbye";
        cout << endl;
        return 0;
    }

    // For a valid distance, compute and display the amount of time it will take
    //for the sound wave to travel the given distance, rounded to 4 decimal places.
    if (choice == 'a' || choice == 'A')
    {
        cout << "The sound will travel " << fixed << distance/airTime << " seconds.\n" << "Goodbye\n";
    }
    else if (choice == 'w' || choice == 'W')
    {
        cout << "The sound will travel " << fixed << distance/waterTime << " seconds.\n" << "Goodbye\n";
    }
    else
    {
        cout << "The sound will travel " << fixed << distance/steelTime << " seconds.\n" << "Goodbye\n";
    }
}
