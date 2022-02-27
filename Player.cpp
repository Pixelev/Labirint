#include "Player.h"
#include "map.h"

void Player::setWidth(int width)
{
	this->width = width;
}

void Player::setHeight(int height)
{
	this->height = height;
}

int Player::getWidth()
{
	return width;
}

int Player::getHeight()
{
	return height;
}

void Player::dontMoveBehindMap()
{
	if (position.x > WINDOW_WIDTH - width)
	{
		position.x = WINDOW_WIDTH - width;
		setPosition(Vector2f(position.x, position.y));
	}
	if (position.y > WINDOW_HEIGHT - height)
	{
		position.y = WINDOW_HEIGHT - height;
		setPosition(Vector2f(position.x, position.y));
	}
	if (position.y < 0)
	{
		position.y = 0;
		setPosition(Vector2f(position.x, position.y));
	}
	if (position.x < 0)
	{
		position.x = 0;
		setPosition(Vector2f(position.x, position.y));
	}
}

Player::Player() {
	init();
}
void Player::init() {
	sf::Image image;
	image.loadFromFile("images/player1.png");
	texture.loadFromImage(image); // install texture 
	sprite.setTexture(texture); // creates sprite texture
	setTextureRect(IntRect(0, 0, 80, 120));
	setPosition(Vector2f(0, 0));
	sprite.setColor(Color(255, 255, 255, 255));
}

Vector2f Player::getPosition() {
	return sprite.getPosition();
}
void Player::setPosition(Vector2f pos) {
	position = pos;
	sprite.setPosition(position.x, position.y);
}
void Player::setTextureRect(IntRect rect) {
	sprite.setTextureRect(rect);
}
Sprite Player::getSprite() {
	return sprite;
}

void Player::setSpeed(Vector2f speed)
{
	this->speed = speed;
}

Vector2f Player::getSpeed()
{
	return speed;
}

void Player::update()
{
	sprite.move(speed.x, speed.y);
	position = sprite.getPosition(); 
	dontMoveBehindMap();
}
 



