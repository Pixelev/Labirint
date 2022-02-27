#include "map.h"

void Map::init()
{
	mapImage.loadFromFile("images/textures.jpg");
	mapTexture.loadFromImage(mapImage);
	mapSprite.setTexture(mapTexture);
}
Map::Map()
{
	init();
	player = new Player();
}

void Map::draw(RenderWindow& window)
{
	for (int i = 0; i < HEIGHT_MAP; i++)
	{
		for (int j = 0; j < WIDTH_MAP; j++)
		{
			if (TileMap[i][j] == 's')
			{
				mapSprite.setTextureRect(IntRect(0, 0, 60, 60));
			}
			if (TileMap[i][j] == 'g')
			{
				mapSprite.setTextureRect(IntRect(0, 60, 60, 60));
			}
			if (TileMap[i][j] == 'l')
			{
				mapSprite.setTextureRect(IntRect(180, 60, 60, 60));
			}
			if (TileMap[i][j] == 'c')
			{
				mapSprite.setTextureRect(IntRect(120, 0, 60, 60));
			}
			if (TileMap[i][j] == 'a')
			{
				mapSprite.setTextureRect(IntRect(60, 60, 60, 60));
			}
			mapSprite.setPosition(j * 60, i * 60);
			window.draw(mapSprite);
		}
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
}
