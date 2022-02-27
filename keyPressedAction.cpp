#include "keyPressedAction.h"

keyPressedAction::keyPressedAction()
{

}

void keyPressedAction::setPlayer(Player* player)
{
	this->player = player;
}

void keyPressedAction::action()
{
	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		player->setSpeed(Vector2f(0.3, 0));
		player->setTextureRect(IntRect(int(player->currentFrame) * player->getWidth(), 3 * player->getHeight(), player->getWidth(), player->getHeight()));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		player->setSpeed(Vector2f(-0.3, 0));
		player->setTextureRect(IntRect(int(player->currentFrame) * player->getWidth(), 2 * player->getHeight() , player->getWidth(), player->getHeight()));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		player->setSpeed(Vector2f(0, -0.3));
		player->setTextureRect(IntRect(int(player->currentFrame) * player->getWidth(), 1 * player->getHeight(), player->getWidth(), player->getHeight()));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		player->setSpeed(Vector2f(0, 0.3));
		player->setTextureRect(IntRect(int(player->currentFrame) * player->getWidth() , 0 * player->getHeight(), player->getWidth(), player->getHeight()));
	}
	else
	{
		player->setSpeed(Vector2f(0, 0));
	}
	player->currentFrame = player->currentFrame + 0.005;
	if (player->currentFrame > 4)
	{
		player->currentFrame = 0;
	}
}
