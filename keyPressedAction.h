#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

using namespace sf;

class keyPressedAction
{
	Player* player;
public:
	keyPressedAction();
	void setPlayer(Player* player);
	void action();
};