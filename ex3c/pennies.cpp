#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int daysWorked;
    float accEarnings=1, totalEarnings=0.01;
    cout << "How many days have you worked? ";
    cin >> daysWorked;
    while (daysWorked<1) {
        cout << "Must be at least 1 day. How many days have you worked? ";
        cin >> daysWorked;
    }
    cout << "\n" << "Day" << setw(29)<< "Amount earned" << endl;
    cout << "___________________________________" << endl;
    cout << endl;
    cout << "1" << setw(24)<< "£0.01" << endl;
    for( int a=2; a<daysWorked+1; a++ ){
        cout << a;
        accEarnings*=2;
        totalEarnings = totalEarnings+(accEarnings/100);
        if (a < 10){
        cout << setw(20) << "£" << accEarnings/100 << endl;
        }
        else{
        cout << setw(19) << "£" << accEarnings/100 << endl;
        }
    }
    cout << endl << "Total earnings = " << "£" << fixed << setprecision(2) << totalEarnings << endl;
    return 0;
}
