#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "map.h"
#include "keyPressedAction.h"
#include "Camera.h"


using namespace sf;
using namespace std;

class Engine { // наш класс игрового движка, замен€ет main
public:
	RenderWindow window;
	Map map; 
	keyPressedAction pressedAction;
	Camera* camera;
	Engine(); // конструктор класса
	void init(); // дл€ загрузки игровых компонентов
	void loop();
	void draw();
	void update();
};
