#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"
#include <list>
#include <iostream>
#include "Arrow.h"

using namespace sf;
using namespace std;

class Archer : public Entity
{
private:
	bool isShot = false;
	Arrow* arrow;
	float currentFrame = 0;
	void animation();
	void shoot();
	int width = 60;
	int height = 55;
public:
	Archer(Vector2f position, String imagePath);
	void collision(list <Entity*> entities);
	void update();
	Arrow* getArrow();
};



