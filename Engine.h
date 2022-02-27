#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "map.h"
#include "keyPressedAction.h"
#include "Camera.h"


using namespace sf;
using namespace std;

class Engine { // ��� ����� �������� ������, �������� main
public:
	RenderWindow window;
	Map map; 
	keyPressedAction pressedAction;
	Camera* camera;
	Engine(); // ����������� ������
	void init(); // ��� �������� ������� �����������
	void loop();
	void draw();
	void update();
};
