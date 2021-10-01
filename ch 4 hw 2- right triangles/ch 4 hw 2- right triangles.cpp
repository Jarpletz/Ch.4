

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
	float a, b, c;
	double bigAngle;

	cout << "Right triangle Checker" << endl<<endl;

	cout << "Length of Longest Side:";
	cin >> c;
	cout << "Length of side 2:";
	cin >> b;
	cout << "Length of side 3:";
	cin >> a;

	float pyth = pow(a, 2) + pow(b, 2);


	//Acute, right, or obtuse?
	if (pow(c, 2) < pyth) {
		cout << "The Largest Angle is Less than 90 Degrees, so this is an Acute Triangle!"<<endl;
	}
	else if (pow(c,2)==pyth) {
		cout << "There is a 90 degree angle, so this is a Right Triangle!" << endl;
	}
	else {
		cout << "The Largest Angle is Greather than 90 Degrees, so this is an Obtuse Triangle!" << endl;
	}

	//Equalateral, Isoscoles, or Scalene?
	if (a == b && b== c) {
		cout << "All three side lengths are the same, so this is an Equilateral Triangle!" << endl;
	}
	else if (a == b || a == c || b == c) {
		cout << "Two Sides are the same length, so this is an Isosceles Triangle!" << endl;
	}
	else {
		cout << "All Sides are diffrent lengths, so this is a Scalene Triangle!" << endl;
	}

	return 0;
}



