#pragma once

#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;

class Health : public Entity
{
private:
	void init();
public:
	Health(Vector2f position, String imagePath);
};