#include "Wall.h"

Wall::Wall(Vector2f position, String imagePath) : Entity (imagePath)
{
	width = 60;
	height = 60;
	setPosition(position);
	setName("Wall");
}
