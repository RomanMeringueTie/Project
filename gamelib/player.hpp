#pragma once
#include <SFML/Graphics.hpp>

/////////////////////////Body/////////////////////////
class Body
{
protected:
    float x;
    float y;

public:
    Body();
    ~Body();
    float get_x();
    float get_y();
    void draw(sf::RenderWindow &window);
    void move();
};
/////////////////////////Body/////////////////////////

/////////////////////////Stick/////////////////////////
class Stick : public Body
{

public:
    Stick();
    ~Stick();
    float get_x();
    float get_y();
    void draw(sf::RenderWindow &window);
};
/////////////////////////Stick/////////////////////////
