#include "Entity.h"

Entity::Entity(float in_x, float in_y, float in_width, float in_height, const char* in_filePath) {
	position = Vector2(in_x, in_y);
	width = in_width;
	height = in_height;
	//colider = BoxColider2D(position, width, height);
	SetSprite(in_filePath);

}

Entity::Entity(Vector2 in_position, float in_width, float in_height, const char* in_filePath) {
	position = in_position;
	width = in_width;
	height = in_height;
	//colider = BoxColider2D(position, width, height);
	SetSprite(in_filePath);

}

Entity::~Entity() {
	DestroySprite(this->spriteID);
}

void Entity::Draw() {
	MoveSprite(spriteID, position.x, position.y);
	DrawSprite(spriteID);
}

//void Entity::UpdateColider() {}

//bool Entity::HasColidedWith() {}

void Entity::Collide(Entity &other) {
	//todo

}

//BoxColider2D Entity::GetColider() {}

float Entity::getWidth() {
	return width;
}

float Entity::getHeight() {
	return height;
}

void Entity::SetSprite(const char* in_filePath) {
	spriteID = CreateSprite(in_filePath, width, height, true);
}