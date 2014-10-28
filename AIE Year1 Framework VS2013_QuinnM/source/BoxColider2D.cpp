#include "BoxColider2D.h"

BoxColider2D::BoxColider2D(Vector2 in_position, float in_width, float in_height) {
	position = in_position;
	width = in_width;
	height = in_height;
}

BoxColider2D::BoxColider2D(float in_x, float in_y, float in_width, float in_height) {
	position = Vector2(in_x, in_y);
	width = in_width;
	height = in_height;
}