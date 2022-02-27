#include "Camera.h"

void Camera::setCenter()
{
	Vector2f cameraPos(player->getPosition().x, player->getPosition().y);
	if (cameraPos.x > RIGHT_BORDER)
	{
		cameraPos.x = RIGHT_BORDER;
	}
	if (cameraPos.x < LEFT_BORDER)
	{
		cameraPos.x = LEFT_BORDER;
	}
	if (cameraPos.y > DOWN_BORDER)
	{
		cameraPos.y = DOWN_BORDER;
	}
	if (cameraPos.y < UP_BORDER)
	{
		cameraPos.y = UP_BORDER;
	}
	view.setCenter(cameraPos.x, cameraPos.y);
}

void Camera::init()
{
	view.reset(sf::FloatRect(0, 0, 800, 500)); 
}

Camera::Camera(Player* player)
{
	this->player = player;
	init();
}

void Camera::update()
{
	setCenter();
}

View Camera::getView()
{
	return view;
}
