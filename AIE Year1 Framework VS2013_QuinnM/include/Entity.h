//#include "BoxColider2D.h"
#include "Vector2.h"
#include "AIE.h"

#ifndef _Entity_h_
#define _Entity_h_

class Entity {
public:
	Entity(float in_x, float in_y, float in_width, float in_height, const char* in_filePath);
	Entity(Vector2 in_position, float in_width, float in_height, const char* in_filePath);
	~Entity();

	virtual void Update(float in_deltaTime) = 0;
	virtual void Draw();//she default will simply draw itself
	//void UpdateColider();//tells the colider of a change in position

	//bool HasColidedWith(Entity &other);//checks if a colision has hapend via the BoxColider class
	virtual void Collide(Entity &other);//the response to a colision the default will force itself out of the entity it has colided with
	//BoxColider2D GetColider();

	virtual bool IsActive() = 0;//checks to see if the entity should be deleted

	Vector2 position;

protected:
	float getWidth();
	float getHeight();

private:
	void SetSprite(const char* in_filePath);

	unsigned int spriteID;
	float width;
	float height;
	//BoxColider2D colider;

};

#endif