#include "Point.h"
#include <iomanip>
#include <cstdlib>

using namespace std;

ostream& operator<<(ostream& output, const Point& coordinate)
{
	output << "X Coordinate: " << coordinate.xCoordinate << "\nY Coordinate: "
		<< coordinate.yCoordinate << "\n" << "(" << coordinate.xCoordinate << ","
		<< coordinate.yCoordinate << ")" << endl;
	return output;
}

istream& operator>>(istream& input, Point& coordinate)
{
	input.ignore();
	input >> setw(1) >> coordinate.xCoordinate;
	input.ignore();
	input >> setw(1) >> coordinate.yCoordinate;
	if (!cin)
	{
		cerr << "Bad value!" << endl;
		system("pause");
		exit(EXIT_FAILURE);

	}
	return input;
}