#pragma once 
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace std;

class Wall : public Entity
{
public:
	Wall(Vector2f position, String imagePath);
};