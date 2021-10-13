

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float number;
    char type;
    float dayMin, nightMin, total=0;

    cout << "Ring Ring Cha-shing Cell Service\n Monthly Bill Calculator\n\n";
    cout <<left<<setw(53)<<setfill('.') << "Account Number: ";
    cin >> number;
    cin.ignore(1000000, '\n');
    MARKER: cout << setw(53) << setfill('.') << "Service Plan Code (R or P)";
    cin >>type;
    cin.ignore(1000000, '\n');

    switch (type) {
    case 'P':
    case 'p':
        cout << setw(53) << setfill('.') << "Total Daytime Minutes Used (Between 6AM and 6PM):";
        cin >> dayMin;
        cout << setw(53) << setfill('.') << "Total Nighttime Minutes Used (Between 6PM and 6AM):";
        cin >> nightMin;
        total = 25;
        if (75 < dayMin) {
            total += 0.1f * (dayMin - 75);
        }
        if (100 <nightMin) {
            total += 0.05f * (nightMin - 100);
        }
        break;
    case 'R':
    case 'r':
        total = 10;
        cout << setw(53) << setfill('.') << "Total Minutes Used:";
        cin >> dayMin;
        if (50 < dayMin) {
            total += 0.2f * (dayMin - 50);
        }

        break;
    default:
            cout << "INVALID PLAN CODE: Please input correct Service Plan Code!\n";
            goto MARKER;
    }

    cout << setw(53) << setfill('.') << "Total Due:" << "$"<<total << endl;


    return 0;
}

