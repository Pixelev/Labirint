#include "Money.h"

void Money::init()
{
	sf::Image image;
	image.loadFromFile("images/coin.png");
	texture.loadFromImage(image); // install texture 
	sprite.setTexture(texture); // creates sprite texture
}

Money::Money(Vector2f position)
{
	init();
	setPosition(position);
}

void Money::setPosition(Vector2f position)
{
	this->position = position;
	sprite.setPosition(position.x, position.y);
}

void Money::setTextureRect(IntRect rect)
{
	sprite.setTextureRect(rect);
}

void Money::setWidth(int width)
{
	this->width = width;
}

void Money::setHeight(int height)
{
	this->height = height;
}

Sprite Money::getSprite()
{
	return sprite;
}

int Money::getWidth()
{
	return height;
}

int Money::getHeight()
{
	return height;
}
