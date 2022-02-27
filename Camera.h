#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

const int LEFT_BORDER = 400;// ������� ������ ����� 
const int RIGHT_BORDER = 860;// ������� ������ ������ 
const int UP_BORDER = 250;// ������� ������ ������ 
const int DOWN_BORDER = 470;//������� ������ �����


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