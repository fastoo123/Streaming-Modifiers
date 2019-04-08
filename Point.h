#include <iostream>
#include <string>

using namespace std;

class Point
{
public:
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);
private:
	int xCoordinate;
	int yCoordinate;
};

