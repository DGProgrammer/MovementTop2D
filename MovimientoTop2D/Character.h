#pragma once
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML\Graphics.hpp>

class Character
{
public:

	Character(sf::Vector2f size, sf::Color color, sf::Vector2f pos);

	void drawCharacter(sf::RenderWindow& window);
	void moveCharacter(sf::RenderWindow& window);

private:
	float velocity = 0.15f;
	sf::Vector2f m_position;
	sf::RectangleShape m_sprite;
};

