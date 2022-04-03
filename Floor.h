#pragma once 
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace std;

class Floor : public Entity
{
public:
	Floor(Vector2f position, String imagePath);
};