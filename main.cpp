#include <iostream>
#include "SFML/Graphics.hpp"
#include "items.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1300, 800, 32), "SFML Graphics");
	sf::RenderWindow* windowPtr(&window);
	sf::Event e;

	Particle particle1(100, 100, 100);

	sf::CircleShape testCircle(particle1.SpawnCircle());

	while (window.isOpen())
	{

		sf::Vector2i mousePosition = sf::Mouse::getPosition(window);


		window.clear();

		while (window.pollEvent(e))
		{
			if (e.type == sf::Event::Closed)
				window.close();
			if (e.type == sf::Event::Resized)
				window.setView(sf::View(sf::FloatRect(0, 0, e.size.width, e.size.height)));
		}

		//window.draw(testCircle);
		particle1.DrawCircle(windowPtr);

		window.display();

	}






}