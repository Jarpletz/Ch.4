// ch4 hw 5- banking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int numbAccounts = 5;

class Account {
public:
    int number;
    char type;
    float min;
    float current;
};
Account accounts[numbAccounts];

int main()
{
    ifstream fin;
    fin.open("OldBalances.txt");
    ofstream fout;
    fout.open("NewBalances.txt");

    fout << "New Account Balances: \n\nNumber  Type  Min. Balance   Current Balance" << endl;

    for (int i = 0; i < numbAccounts; i++) {
        Account a = accounts[i];

        fin >> a.number >> a.type >> a.min >> a.current;//get old
        fin.ignore(10, '\n');

        //calculate new
        switch (a.type) {
        case 'C':
        case 'c':
            if (a.current < a.min) {
                a.current -= 25;
            }
            else {
                if (a.current <= 5000+a.min) {
                    a.current *= 1.03;
                }
                else {
                    a.current *= 1.05;
                }
            }
            break;
        case 'S':
        case 's':
            if (a.current < a.min) {
                a.current -= 10;
            }
            else {
                a.current *= 1.04;
            }
            break;
        default:
            fout << "ERROR: INVALID ACCOUNT TYPE FOR ACCOUNT " << a.number << endl;
        }

        //output new
        fout << left;
        fout << setw(8) << a.number;
        fout << setw(6) << a.type;

        fout << fixed << showpoint << setprecision(2);
        fout << setw(15) << a.min;
        fout <<  a.current<<endl;


    }
    cout << "New Account Balances Pushed to File!" << endl;



    return 0;
}
