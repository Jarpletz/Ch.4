// ch 4 hw 1- cable company billing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float resProcessFee = 4.5;
float resServiceFee = 20.5;
float resChannelFee = 7.5;

float bisProcessFee = 15;
float bisServiceFee1 = 75;
float bisServiceFee2 = 5;
float bisChannelFee= 50;

int account;
char code;
int premiumChannels;
int basicChannels=0;
float total;

int main()
{
	cout << "Cable Bill Calculator" << endl << endl;

	cout << left << setw(15) << setfill('.') << "Accout Number:";
	cin >> account;
	MARKER : cout << left << setw(15) << setfill('.') << "Customer Code ('r' or 'b'): ";
	cin >>code;
	if (code !='r'&& code!='b') {
		cout << "ERROR: Customer code must be 'r' or 'b'!" << endl;
		goto MARKER; }
	cout << left << setw(15) << setfill('.') << "Number of Premium Channels:";
	cin >> premiumChannels;

	if (code == 'b' || code == 'B') {// if a buisness...
		cout << left << setw(15) << setfill('.') << "Number of Basic Service Connections:";
		cin >> basicChannels;
		if (basicChannels > 10) {
			total += bisServiceFee2 * (basicChannels - 10) + (bisServiceFee1*10);
		}
		else {
			total += basicChannels * bisServiceFee1;
		} 
		//basic channel cost

		total += premiumChannels * bisChannelFee;//premium channel cost
		total += bisProcessFee;
	}

	if (code == 'r' || code == 'R') { // if residential...
		total += resProcessFee;
		total += resServiceFee;
		total += premiumChannels * resChannelFee;
	}

	cout << endl << endl;
	cout << left << setw(15) << setfill('.') << "Account Number:" << account << endl;
	cout << left << setw(15) << setfill('.') << "Total Billing Amount:" << "$" << total << endl;

	return 0;
}

