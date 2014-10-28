#include "Vector2.h"

#ifndef _BoxColider2D_h_
#define _BoxColider2D_h_

class BoxColider2D {
public:
	BoxColider2D(Vector2 in_position, float in_width, float in_height);
	BoxColider2D(float in_x, float in_y, float in_width, float in_height);
	~BoxColider2D();

	bool HasColidedWith(BoxColider2D other);

	void SetPosition(Vector2 in_position);
	void SetPosition(float in_x, float in_y);

private:
	Vector2 GetTopLeftPoint();
	Vector2 GetBottomRightPoint();

	float width;
	float height;
	Vector2 position;
};

#endif