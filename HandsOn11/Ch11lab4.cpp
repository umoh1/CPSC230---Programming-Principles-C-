#include <iostream>
#include <iomanip>

using namespace std;


// This program uses a structure to hold data about a rectangle 
// It calculates the area and perimeter of a box 

// PLACE YOUR NAME HERE

// Fill in code to define a structure named dimensions that
// contains 2 float members, length and width
struct dimensions
{
	float length, width;
};

// Fill in code to define a structure named rectangle that contains
// 3 members, area, perimeter, and sizes.  area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable

struct results
{
	float area, perimeter;
};

struct rectangle
{
	results attributes;
	dimensions sizes;
};

float calculateArea(rectangle);
float calculatePerimeter(rectangle);

int main()
{
	// Fill in code to declare a rectangle structure variable named box.
	rectangle box;

	cout << "Enter the length of a rectangle: ";
	cin >> box.sizes.length;

	// Fill in code to read in the length to the appropriate location

	cout << "Enter the width of a rectangle: ";
	cin >> box.sizes.width;

	// Fill in code to read in the width to the appropriate location 

	cout << endl << endl;

	// Fill in code to compute the area and store it in the appropriate
	// location
	// Fill in code to compute the perimeter and store it in the 
	// appropriate location

	//box.attributes.area = 
	//box.attributes.perimeter = ;

	cout << fixed << showpoint << setprecision(2);
	cout << "The area of the rectangle is " << calculateArea(box) << endl;
	cout << "The perimeter of the rectangle is " <<calculatePerimeter(box)
		<< endl;

	return 0;
}

float calculateArea(rectangle rect)
{
	return rect.sizes.length * rect.sizes.width;
}

float calculatePerimeter(rectangle rect)
{
	return (2 * rect.sizes.length) + (2 * rect.sizes.width);
}