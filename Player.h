#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "MoveEntity.h"
using namespace sf;

class Player:public MoveEntity 
{
private:
	void init(); // creates players starter parameters
	int money = 0;
	String state = "start";
public:
	void dontMoveBehindMap();
	Player(Vector2f position, String imagePath); // constructor
	float currentFrame = 0;
	void update();
	int getMoney();
	String getState();
	void setMoney(int money);
	void setState(String state);
};




