#include "Floor.h"

Floor::Floor(Vector2f position, String imagePath) : Entity(imagePath)
{
	width = 60;
	height = 60;
	setPosition(position);
	setName("Floor");
}
