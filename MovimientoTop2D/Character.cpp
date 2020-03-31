#include "Character.h"
#include "SFML\Graphics.hpp"

using namespace sf;

Character::Character(Vector2f size, Color color, Vector2f pos)
	: m_position(pos)
{
	m_sprite = RectangleShape(size);
	m_sprite.setFillColor(color);
}

void Character::drawCharacter(sf::RenderWindow& window)
{
	m_sprite.setPosition(m_position);
	window.draw(m_sprite);
}

void Character::moveCharacter(sf::RenderWindow& window)
{
	Vector2f limit((Vector2f)window.getSize() - m_sprite.getSize());
	Vector2f finalPos(m_position);

	if (Keyboard::isKeyPressed(Keyboard::Right))
		finalPos.x += velocity;
	else if (Keyboard::isKeyPressed(Keyboard::Left))
		finalPos.x -= velocity;
	else if (Keyboard::isKeyPressed(Keyboard::Up))
		finalPos.y -= velocity;
	else if (Keyboard::isKeyPressed(Keyboard::Down))
		finalPos.y += velocity;

	if (finalPos.x < limit.x && finalPos.x > 0 && finalPos.y < limit.y && finalPos.y > 0)
	{
		m_position = finalPos;
		m_sprite.setPosition(m_position);
	}

	drawCharacter(window);
}
