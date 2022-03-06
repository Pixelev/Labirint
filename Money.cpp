#include "Money.h"

void Money::init()
{
	width = 32;
	height = 32;
}

Money::Money(Vector2f position, String imagePath) : Entity(imagePath)
{
	init();
	setPosition(position);
}

