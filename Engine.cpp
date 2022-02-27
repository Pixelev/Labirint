#include "Engine.h"
#include "map.h"

Engine::Engine() {
	init();
}

void Engine::init() { // ������� �������� ����������� ����
	window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Game");
	pressedAction.setPlayer(map.getPlayer());
	camera = new Camera(map.getPlayer());
}
void Engine::loop() {// ������� �������� �����
	while (window.isOpen())// ������� ����
	{
		Event event;// ������� ������� ���������� � ����
		while (window.pollEvent(event))// ��������� �������
		{
			if (event.type == Event::Closed) {
				window.close();// ������� ����
			}
		}
		draw();
		update();
	}
}
void Engine::draw() {
	window.clear(Color(0, 255, 0)); // green font
	map.draw(window);
	window.display(); // display on window
	window.setView(camera->getView());
}

void Engine::update()
{
	pressedAction.action();
	map.update();
	camera->update();
}

