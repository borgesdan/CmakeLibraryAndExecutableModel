#ifndef TEST_RECTANGLE_HPP
#define TEST_RECTANGLE_HPP

struct Point {
	int X{ 0 };
	int Y{ 0 };

	constexpr Point() = default;

	constexpr Point(const int& X, const int& Y)
		: X(X), Y(Y) {}

	constexpr bool operator==(const Point& other) const {
		return X == other.X && Y == other.Y;
	}
};

struct Rectangle {
	int X{ 0 };
	int Y{ 0 };
	int Width{ 0 };
	int Height{ 0 };

	constexpr Rectangle() = default;

	constexpr Rectangle(const int& X, const int& Y, const int& Width, const int& Height) :
		X(X), Y(Y), Width(Width), Height(Height) {}

	constexpr bool operator==(const Rectangle& other) const {
		return Height == other.Height && Width == other.Width && X == other.X && Y == other.Y;
	}

	constexpr int Left() const { return X; }
	constexpr int Right() const { return X + Width; }
	constexpr int Top() const { return Y; }
	constexpr int Bottom() const { return Y + Height; }

	constexpr Point Location() const { return { X, Y }; }
	constexpr void Location(Point const& p) {
		X = p.X;
		Y = p.Y;
	}

	constexpr Point Center() const { return { X + Width / 2, Y + Height / 2 }; }

	constexpr static Rectangle Empty() { return {}; }

	constexpr bool IsEmpty() const { return Width == 0 && Height == 0 && X == 0 && Y == 0; }	

	static Rectangle Intersect(Rectangle const& value1, Rectangle const& value2);
};

#endif