#include "Archer.h"

void Archer::animation()
{
	currentFrame += 0.02;
	setTextureRect(IntRect(int(currentFrame) * width, 0, width, height));
}

void Archer::shoot()
{
	if (isShot == false)
	{
		if (currentFrame >= 4)
		{
			arrow->setPosition(Vector2f(position.x - width, position.y + 20));
			setTextureRect(IntRect(int(currentFrame) * width, 0, width, height));
			currentFrame -= 4;
			isShot = true;
		}
		else
		{
			animation();
		}
		
	}
	else
	{
		arrow->update();
	}
}

Archer::Archer(Vector2f position, String imagePath) : Entity (imagePath)
{
	setPosition(position);
	setName("archer");
	arrow = new Arrow(Vector2f(position.x, position.y + 20), "images/arrow.png");
	setTextureRect(IntRect(0, 0, width, height));
	sprite.setScale(-1, 1);
}

void Archer::collision(list<Entity*> entities)
{
	FloatRect arrowCollider = arrow->getSprite().getGlobalBounds();
	for (auto it = entities.begin(); it != entities.end(); it++)
	{
		FloatRect otherCollider = (*it)->getSprite().getGlobalBounds();
		if (arrowCollider.intersects(otherCollider) && (*it)->getName() == "wall")
		{
			isShot = false;
		}
	}
}

void Archer::update()
{
	shoot();
}

Arrow* Archer::getArrow()
{
	return arrow;
}
