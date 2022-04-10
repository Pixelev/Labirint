#include "map.h"


void Map::init()
{
	player = new Player(Vector2f(100, 100), "Images/player1.png"); 
	for (int i = 0; i < HEIGHT_MAP; i++)
	{
		for (int j = 0; j < WIDTH_MAP; j++)
		{
			if (TileMap[i][j] == 'm')
			{
				Floor* floor = new Floor(Vector2f(j * 60, i * 60), "Images/floor.png");
				entities.push_back(floor);
				Money* money = new Money(Vector2f(j * 60 + 15, i * 60 + 15), "images/coin.png");
				entities.push_back(money);
			}

			if (TileMap[i][j] == 'k')
			{
				Wall* wall = new Wall(Vector2f(j * 60, i * 60), "Images/brick.png");
				entities.push_back(wall);
				
			}

			if (TileMap[i][j] == 'g')
			{
				Floor* floor = new Floor(Vector2f(j * 60, i * 60), "Images/floor.png");
				entities.push_back(floor);

			}
			
			if (TileMap[i][j] == 'h')
			{
				Floor* floor = new Floor(Vector2f(j * 60, i * 60), "Images/floor.png");
				entities.push_back(floor);

				Health* health = new Health(Vector2f(j * 60 + 15, i * 60 + 15), "Images/hp.png");
				entities.push_back(health);

			}

			if (TileMap[i][j] == 'a')
			{
				Floor* floor = new Floor(Vector2f(j * 60, i * 60), "Images/floor.png");
				entities.push_back(floor);

				Archer* archer = new Archer(Vector2f(j * 60, i * 60), "images/archer.png");
				entities.push_back(archer);

				entities.push_back(archer->getArrow());

			}


		} //k - это стена, буква g - пол, а m - монетка
	}
}
Map::Map()
{
	init();
}

void Map::draw(RenderWindow& window)
{	
	for (auto it = entities.begin(); it != entities.end(); it++)
	{
		window.draw((*it)->getSprite());
	}
	window.draw(player->getSprite());
	
}

Player* Map::getPlayer()
{
	return player;
}

void Map::update()
{
	player->update();
	for (auto it = entities.begin(); it != entities.end(); it++)
	{
		if ((*it)->getName() == "archer")
		{
			(*it)->update();
			Archer* archer = (Archer*)(*it);
			archer->collision(entities);
		}
	}
	for (auto it = entities.begin(); it != entities.end(); it++)
	{
		FloatRect playerCollider = player->getSprite().getGlobalBounds();
		FloatRect otherCollider = (*it)->getSprite().getGlobalBounds();
		if (playerCollider.intersects(otherCollider) && (*it)->getName() == "Money")
		{
			entities.erase(it++); // deletes coin
		}

		else if (playerCollider.intersects(otherCollider) && (*it)->getName() == "Wall")
		{
			player->setSpeed(Vector2f(-player->getSpeed().x, -player->getSpeed().y));
			player->update();
			it++;
		}

	}
}
