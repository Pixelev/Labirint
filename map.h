#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Money.h"
#include "Health.h"
#include "Wall.h"
#include "Floor.h"
#include <list>
#include "Archer.h"

using namespace std;
using namespace sf;

const int WINDOW_WIDTH = 1260;
const int WINDOW_HEIGHT = 720;
const int WIDTH_MAP = 21;
const int HEIGHT_MAP = 12;

class Map {
public:
	Map();
	void draw(RenderWindow& window);
	Player* getPlayer();
	void update();
private:
	void init();
	list <Entity*> entities;
	Player* player;

	sf::String TileMap[HEIGHT_MAP] = {

	"kkkkkkkkkkkkkkkkkkkkk",

	"kgghgggkgmggggkgmkgmk",

	"kggggggkggggggkggkggk",

	"kggggggkkkkgggkggkggk",

	"kkkkkgggmgkgggkggkggk",

	"kgggggggggkgggkggkggk",

	"kgggghggggkgggkggkggk",

	"kggkkkkkkkkgggkggkggk",

	"kgggggggggggghgggkggk",

	"kggggggmgggggagmggggk",

	"kggggghggggggaggggggk",

	"kmgkkkkkkkkkkkkkkkkkk"

	};
}; //k - это стена, буква g - пол, а m - монетка
