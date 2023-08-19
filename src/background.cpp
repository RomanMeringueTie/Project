#include <SFML/Graphics.hpp>
#include "background.hpp"

void Rink::draw(sf::RenderWindow &window)
{
    sf::Texture rink_t;
    rink_t.loadFromFile("pictures/rink.png");
    sf::Sprite rink_s(rink_t);
    rink_s.setPosition(0, 0);
    window.draw(rink_s);
}
