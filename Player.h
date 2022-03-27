#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "MoveEntity.h"
using namespace sf;

class Player:public MoveEntity 
{
private:
	void init(); // creates players starter parameters
public:
	void dontMoveBehindMap();
	Player(Vector2f position, String imagePath); // constructor
	float currentFrame = 0;
	void update();
};




