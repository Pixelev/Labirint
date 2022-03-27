#include "Health.h"

void Health::init()
{
	width = 32;
	height = 32;
}

Health::Health(Vector2f position, String imagePath) : Entity(imagePath)
{
	init();
	setPosition(position);
}
