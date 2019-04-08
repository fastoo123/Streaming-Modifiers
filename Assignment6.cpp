#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point point;

	cout << "Enter a point in the form (x,y): " << endl;

	cin >> point;

	cout << "\nThe point entered was:\n";

	cout << point << endl;

	system("pause");
}