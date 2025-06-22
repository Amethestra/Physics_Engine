#pragma once
#include <cmath>

using real = double;

struct Vec2 {
	real x, y;

	Vec2(real x = 0, real y = 0) : x(x), y(y) {}
	
	Vec2 operator+(const Vec2& rhs) const {
		return Vec2(x + rhs.x, y + rhs.y);
	}

	Vec2 operator-(const Vec2& rhs) const {
		return Vec2(x - rhs.x, y - rhs.y);
	}

	Vec2 operator*(real scalar) const {
		return Vec2(x * scalar, y * scalar);
	}

	Vec2& operator+=(const Vec2& rhs) {
		x += rhs.x; y += rhs.y; return *this;

	}

	real magnitude() const {
		return std::sqrt(x * x + y * y);
	}
	
	real normalized() const {
		real mag = manitude();
		return mag == 0 ? Vec2(0, 0) : Vec2(x / mag, y / mag);
	}

	real dot(const Vec2& rhs) const {
		return x * rhs.x + y * rhs.y;
	}
};