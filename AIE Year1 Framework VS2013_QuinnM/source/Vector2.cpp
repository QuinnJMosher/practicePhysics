#include "Vector2.h"

Vector2::Vector2() {
	x = 0;
	y = 0;
}

Vector2::Vector2(float in_x, float in_y) {
	x = in_x;
	y = in_y;
}

void operator+= (Vector2 &left, Vector2 &right) {
	left.x += right.x;
	left.y += right.y;
}

void operator-= (Vector2 &left, Vector2 &right) {
	left.x -= right.x;
	left.y -= right.y;
}

void Vector2::operator= (Vector2 &other) {
	this->x = other.x;
	this->y = other.y;
}

Vector2 operator+ (Vector2 &left, Vector2 &right) {
	return Vector2(left.x + right.x, left.y + right.y);
}

Vector2 operator- (Vector2 &left, Vector2 &right) {
	return Vector2(left.x - right.x, left.y - right.y);
}