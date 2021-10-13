

#include <iostream>
#include <iomanip>
using namespace std;

float picWidth, picHeight;
char type;
string color;
int crowns;
char cardboard, glass,hasColor;

float picArea, frameArea;
float total;

int main()
{
	cout << setprecision(2) << fixed << showpoint;

	cout << "Custom Frame Calculator" << endl;
	cout << "Picture Width (in Inches): ";
	cin >> picWidth;
	cout << "Picture Height (in inches): ";
	cin >> picHeight;
	
	picArea = picWidth * picHeight;
	frameArea = ((picWidth + 2) * (picHeight + 2)) - picArea;

	cout << "\nArea of Picture: " << picArea << endl;
	cout << "Area of Frame (1 inch wide): " << frameArea << endl << endl;
	cout << "Cost of Regular Frame: $0.15 per square inch= $" << frameArea * 0.15<<endl;
	cout << "Cost of Fancy Frame: $0.25 per square inch= $" << frameArea * 0.25 << endl;
	MARKER1 : cout << "Would you Like a Regular or Fancy Frame? (R or F):";
	cin >> type;

	switch (type){//regular or fancy?
	case 'R':
	case 'r':
		total = frameArea * 0.15f;
		break;
	case'F':
	case 'f':
		total = frameArea * 0.25f;
		break;
	default:
		cout << "ERROR: Please select either R or F." << endl;
		goto MARKER1;
		break;
	}


	//color
	cout << "\nYou May Color your frame. White is free, All other colors are $0.10 per square inch =$" << frameArea * 0.1 << endl;
	MARKER2: cout << "Would you Like a color other than White? (Y/N): ";
	cin >> hasColor;
	switch (hasColor) {//color?
	case 'Y':
	case 'y':
		cout << "Color Of frame: ";
		cin >> color;
		cout << "The frame will be " << color << endl;
		total += frameArea * 0.1f;
		break;
	case'N':
	case'n':
		cout << "The frame will be white." << endl;
		break;
	default:
		cout << "ERROR: Please select either Y or N." << endl;
		goto MARKER2;
		break;
	}

	cout << "\nYou May add a cardboard back to the frame for $0.02 per square inch =$" << frameArea * 0.02 << endl;
MARKER3: cout << "Would you Like a cardboard Back? (Y/N): ";
	cin >> cardboard;
	switch (cardboard) {//cardboard back?
	case 'Y':
	case 'y':
		cout << "The frame will include a carboard back." << endl;
		total += frameArea * 0.02f;
		break;
	case'N':
	case'n':
		cout << "The frame will NOT include a carboard back." << endl;
		break;
	default:
		cout << "ERROR: Please select either Y or N." << endl;
		goto MARKER3;
		break;
	}

	cout << "\nYou May add a glass cover to the frame for $0.02 per square inch =$" << frameArea * 0.07 << endl;
MARKER4: cout << "Would you Like a cardboard Back? (Y/N): ";
	cin >> glass;
	switch (glass) {//glass cover?
	case 'Y':
	case 'y':
		cout << "The frame will include a glass cover." << endl;
		total += frameArea * 0.07f;
		break;
	case'N':
	case'n':
		cout << "The frame will NOT include a glass cover." << endl;
		break;
	default:
		cout << "ERROR: Please select either Y or N." << endl;
		goto MARKER4;
		break;
	}

	//crowns
	cout << "\nYou may add crowns to the edge of the frame for $0.35 per crown." << endl;
MARKER5: cout << "How Many crowns would you like to add? ";
	cin >> crowns;
	if (crowns > 0 && crowns <= 4) {
		total += crowns * 0.35f;
		cout << crowns << " Crowns will be on the frame for cost $" << crowns * 0.35 <<"." << endl;
	}
	else if (crowns == 0) {
		cout << "No Crowns will be added to the frame." << endl;
	}
	else {
		cout << "ERROR: Number of frames must be between 0 and 4!" << endl;
		goto MARKER5;
	}

	cout << "\n\nTOTAL COST OF FRAME:....$" << total<<endl<<endl;
	cout << "Thank you for shopping with us!" << endl;

	return 0;
}

