#include <iostream>
#include <SFML/Graphics.hpp>

// class Player
// {
// public:
//     virtual float get_x() = 0;
//     virtual float get_y() = 0;
//     virtual void draw(sf::RenderWindow &window) = 0;
// };

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

class Stick : public Body
{

public:
    Stick();
    ~Stick();
    float get_x();
    float get_y();
    void draw(sf::RenderWindow &window);
};
