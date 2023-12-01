#include "SFML/Graphics.hpp"
#pragma once



class Particle
{



public:

	Particle(float x, float y, float size);
	~Particle();



	float x;
	float y;
	float size;
	sf::CircleShape circle;
	sf::CircleShape SpawnCircle();
	void DrawCircle(sf::RenderWindow* windowPtr);

};

