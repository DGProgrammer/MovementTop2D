#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Color.hpp>
#include "Character.h"

using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	Character c(Vector2f(10, 10), Color::Red, Vector2f(100, 100));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		c.moveCharacter(window);
		window.display();
	}

	return 0;
}
