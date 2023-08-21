#include <player.hpp>

/////////////////////////Body/////////////////////////
Body::Body() : x(0), y(0)
{
}
Body::~Body()
{
}
float Body::get_x()
{
    return x;
}
float Body::get_y()
{
    return y;
}
void Body::draw(sf::RenderWindow &window)
{
    sf::Sprite sibir_r;
    sf::Texture sibir_t;
    sibir_t.loadFromFile("/home/roma/Project/src/pictures/sibir.png");
    sibir_r.setTexture(sibir_t);
    sibir_r.setPosition(x, y);
    window.draw(sibir_r);
}
void Body::move()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        x -= 4;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        x += 4;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        y -= 4;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        y += 4;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        x += 3;
        y += 3;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        x -= 3;
        y += 3;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        x += 3;
        y -= 3;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        x -= 3;
        y -= 3;
    }
}
/////////////////////////Body/////////////////////////

/////////////////////////Stick/////////////////////////
Stick::Stick()
{
    x = x + 5;
    y = y;
}
Stick::~Stick()
{
}
float Stick::get_x()
{
    return x;
}
float Stick::get_y()
{
    return y;
}
void Stick::draw(sf::RenderWindow &window)
{
    sf::Texture stick_t;
    sf::Sprite stick_r;
    stick_t.loadFromFile("/home/roma/Project/src/pictures/stick.png");
    stick_r.setTexture(stick_t);
    stick_r.setPosition(x, y);
    window.draw(stick_r);
}
/////////////////////////Stick/////////////////////////
