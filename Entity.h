#pragma once

#include <SFML/Graphics.hpp>
using namespace sf;

class Entity
{
protected:
	Vector2f position;
	Sprite sprite;
	Texture texture;
	int width;
	int height;
	String imagePath;
	virtual void init();
	String name;
public:
	void setName(String name);
	String getName();
	Entity(String imagePath);
	void setPosition(Vector2f position);
	void setTextureRect(IntRect rect);
	void setWidth(int width);
	void setHeight(int height);
	void setImagePath(String imagePath);
	Vector2f getPosition();
	Sprite getSprite();
	int getWidth();
	int getHeight();
	String getImagePath();
	virtual void update();
};
