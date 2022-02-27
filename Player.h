#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

class Player {
private:
	Vector2f position; // player pos
	Sprite sprite; // player sprite
	Texture texture;
	void init(); // creates players starter parameters
	Vector2f speed;
	int width = 80;
	int height = 120;
public:
	void setWidth(int width);
	void setHeight(int height);
	int getWidth();
	int getHeight();
	void dontMoveBehindMap();
	Player(); // constructor
	void setPosition(Vector2f pos); // creates player pos
	void setTextureRect(IntRect rect); // creates player sprite
	Vector2f getPosition();
	Sprite getSprite();
	void setSpeed(Vector2f speed);
	Vector2f getSpeed();
	float currentFrame = 0;
	void update();
};




