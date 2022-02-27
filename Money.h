#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

class Money
{
private:
	Vector2f position;
	Sprite sprite;
	Texture texture;
	void init();
	int width = 32;
	int height = 32;
public:
	Money(Vector2f position);
	void setPosition(Vector2f position);
	void setTextureRect(IntRect rect);
	void setWidth(int width);
	void setHeight(int height);
	Sprite getSprite();
	int getWidth();
	int getHeight();

};