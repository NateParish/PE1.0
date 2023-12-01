#include <iostream>
#include "items.h"
#include "SFML/Graphics.hpp"


Particle::Particle(float originalX, float originalY, float originalSize)
{
    // Additional initialization code can go here if needed
    this->x = originalX;
    this->y = originalY;
    this->size = originalSize;
    this->circle = sf::CircleShape(10);

}

Particle::~Particle()
{

}

sf::CircleShape Particle::SpawnCircle()
{

    this->circle.setPosition(300, 300);
    this->circle.setFillColor(sf::Color::Green);
    return circle;

}

void Particle::DrawCircle(sf::RenderWindow* window)
{
    window->draw(this->circle);


}