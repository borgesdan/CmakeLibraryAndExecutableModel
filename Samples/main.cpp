// CmakeSharedExeTest.cpp : Defines the entry point for the application.
//

#include "main.h"
#include "rectangle.hpp"

using namespace std;

int main()
{
	Rectangle rec1{ 0,0, 100,100 };
	Rectangle rec2{ 50,50, 100,100 };

	auto intersection = Rectangle::Intersect(rec1, rec2);

	cout << "X: " << intersection.X << " Y:" << intersection.Y << " W:" << intersection.Width << " H:" << intersection.Height << endl;
	return 0;
}
