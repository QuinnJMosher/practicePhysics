#ifndef _Vector2_h_
#define _Vector2_h_

class Vector2 {
public:
	Vector2();
	Vector2(float in_x, float in_y);
	~Vector2();

	void operator +=(Vector2 other);
	void operator -=(Vector2 other);

	float x;
	float y;
};

#endif