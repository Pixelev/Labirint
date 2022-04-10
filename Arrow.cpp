#include "Arrow.h"

Arrow::Arrow(Vector2f position, String imagePath) : MoveEntity(position, imagePath)
{
	setName("arrow");
	setSpeed(Vector2f(-2, 0));
	width = 47;
	height = 22;
}

void Arrow::update()
{
	sprite.move(speed.x, speed.y);
	position = sprite.getPosition();
}
