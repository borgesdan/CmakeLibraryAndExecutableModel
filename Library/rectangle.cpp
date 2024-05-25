#include "rectangle.hpp"

Rectangle Rectangle::Intersect(Rectangle const& value1, Rectangle const& value2) {
	const auto num1 = value1.X + value1.Width;
	const auto num2 = value2.X + value2.Width;
	const auto num3 = value1.Y + value1.Height;
	const auto num4 = value2.Y + value2.Height;
	const auto num5 = value1.X > value2.X ? value1.X : value2.X;
	const auto num6 = value1.Y > value2.Y ? value1.Y : value2.Y;
	const auto num7 = num1 < num2 ? num1 : num2;
	const auto num8 = num3 < num4 ? num3 : num4;
	Rectangle rectangle;
	if (num7 > num5 && num8 > num6)
	{
		rectangle.X = num5;
		rectangle.Y = num6;
		rectangle.Width = num7 - num5;
		rectangle.Height = num8 - num6;
	}
	else
	{
		rectangle.X = 0;
		rectangle.Y = 0;
		rectangle.Width = 0;
		rectangle.Height = 0;
	}
	return rectangle;
}