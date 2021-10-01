

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;


int main()
{
	float a, b, c;
	float discriminant;
	double root1, root2;

	cout << " Quadratic Solver\n Form: ax^2 + bx + c =0,   a!=0" << endl << endl;
	cout << " a:";
	cin >> a;
	cout << " b:";
	cin >> b;
	cout << " c:";
	cin >> c;

	discriminant = pow(b, 2) - 4 * a * c;

	if (discriminant >= 0){
		cout << "\n Discriminant is positive: Quadratic Has 2 Real Roots." << endl;
		root1 = (-b + pow(discriminant, 0.5)) / (2 * a);
		root2 = (-b - pow(discriminant, 0.5)) / (2 * a);
		cout << " X= " << -root1 << endl;
		cout << " X= : " << -root2 << endl;
	}	
	else {
		cout << "\n Discriminant is negitive: Quadratic Has 2 Complex Roots." << endl;
		double complexPart = pow(-discriminant, 0.5)/(2*a);
		double realPart = -b / (2*a);
		cout << " X= " << realPart << " + " << complexPart << "i" << endl;
		cout << " X= " << realPart << " - " << complexPart << "i" << endl;
	}
	
	return 0;
}


