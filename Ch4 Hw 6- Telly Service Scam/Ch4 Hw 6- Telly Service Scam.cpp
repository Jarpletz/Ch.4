

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;
    char type;
    float dayMin, nightMin, total;

    cout << "Ring Ring Cha-shing Cell Service\n Monthly Bill Calculator\n\n";
    cout << "Account Number: ";
    cin >> number;
    MARKER: cout << "Service Plan Code (R or P)";
    cin >>type;

    switch (type) {
    case 'P':
    case 'p':
        cout << "Total Daytime Minutes Used (Between 6AM and 6PM):";
        cin >> dayMin;
        cout << "Total Nighttime Minutes Used (Between 6PM and 6AM):";
        cin >> nightMin;
        if (75 < dayMin) {
            total += 0.1 * (dayMin - 75);
        }
        if (100 <nightMin) {
            total += 0.05 * (nightMin - 100);
        }
        break;
    case 'R':
    case 'r':
        total = 10;
        cout << "Total Minutes Used:";
        cin >> dayMin;
        if (50 < dayMin) {
            total += 0.2 * (dayMin - 50);
        }

        break;
    default:
            cout << "INVALID PLAN CODE: Please input correct Service Plan Code!\n";
            goto MARKER;
    }

    return 0;
}

