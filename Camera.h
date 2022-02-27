#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

const int LEFT_BORDER = 400;// граница камеры слева 
const int RIGHT_BORDER = 860;// граница камеры справа 
const int UP_BORDER = 250;// граница камеры сверху 
const int DOWN_BORDER = 470;//граница камеры снизу


class Camera
{
	Player* player;
	void setCenter();
	void init();
	View view;
public:
	Camera(Player* player);
	void update();
	View getView();
};