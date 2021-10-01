
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int plushies, boxes, containers;
    int plushiesPerBox, boxesPerContainer;
    int extraPlushies, extraBoxes;

    cout << "Shrek Plushie Shipping Logistics" << endl << endl;
    cout <<left<<setw(42)<<setfill('.') << "Number of Shrek Plushies Being Shipped:";
    cin >> plushies;
    cout << left << setw(42) << setfill('.') << "Number of Shrek Plushies Per Box:";
    cin >> plushiesPerBox;
    cout << left << setw(42) << setfill('.') << "Number of Boxes Per Container:";
    cin >> boxesPerContainer;

    boxes = plushies / plushiesPerBox;
    extraPlushies = plushies % plushiesPerBox;

    containers = boxes / boxesPerContainer;
    extraBoxes = boxes % boxesPerContainer;

    cout << endl << endl;
    cout << left << setw(23) << setfill('.') << "Containers Shipped:" << containers << endl;
    cout << left << setw(23) << setfill('.') << "Extra Boxes:" << extraBoxes << endl;
    cout << left << setw(23) << setfill('.') << "Extra Plushies:" << extraPlushies << endl;


    return 0;
}

