#include <iostream>
#include <iomanip>
using namespace std;


// This program uses a structure to hold data about a rectangle 
// PLACE YOUR NAME HERE

// FILL IN CODE TO define a structure named rectangle which has 
// members length, width, area, and perimeter all of which are floats
struct rectangle
{
    double length, width, area, perimeter;
};

int main()
{
    // Fill IN CODE to declare a rectangle variable named box
    rectangle box;

    cout << "Enter the length of a rectangle: ";
    cin >> box.length;
    // FILL IN CODE to read in the length member of box

    cout << "Enter the width of a rectangle: ";
    cin >> box.width;
    // FILL IN CODE to read in the width member of box

    cout << endl << endl;

    // FILL IN CODE to compute the area member of box
    // FILL IN CODE to compute the perimeter member of box
    box.area = box.length * box.width;
    box.perimeter = (2 * box.length) + (2 * box.width);
    cout << fixed << showpoint << setprecision(2);
    cout << "The area of the rectangle is " << box.area;
    cout << endl<<"The perimeter is a " << box.perimeter;

    

    // FILL IN CODE to output the area with an appropriate message
    // FILL IN CODE to output the perimeter with an appropriate message
    if (box.length==box.width)
    {
        cout << endl<<"The rectangle is a square"<<endl;
    }
    else
    {
        cout << endl<< "The rectangle is not a square" << endl;
    }

    return 0;
}
