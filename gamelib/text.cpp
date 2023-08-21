#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Text.hpp>
#include <text.hpp>

/////////////////////////Button/////////////////////////
Button::Button() : text(new sf::Text), font(new sf::Font) {}

Button::~Button()
{
    delete text;
    delete font;
}

sf::Text *Button::get_text() { return text; };

void Button::set_off()
{
    text->setStyle(sf::Text::Bold);
    text->setFillColor(sf::Color(110, 8, 8));
}
void Button::set_on()
{
    text->setStyle(sf::Text::Italic);
    text->setFillColor(sf::Color::Red);
}

bool Button::is_on()
{
    if (text->getStyle() == sf::Text::Italic)
        return true;
    else
        return false;
}
/////////////////////////Button/////////////////////////

/////////////////////////Play/////////////////////////
Play::Play()
{
    font->loadFromFile("/home/roma/Project/src/fonts/porter-sans-inline-block.otf");
    text->setFont(*font);
    text->setString("PLAY");
    sf::FloatRect bounds = text->getLocalBounds();
    text->setPosition(WIDTH / 2 - bounds.width, 540 - 300);
    text->setFillColor(sf::Color(110, 8, 8));
    text->setCharacterSize(200);
    text->setStyle(sf::Text::Bold);
}

Play::~Play() {}
/////////////////////////Play/////////////////////////

/////////////////////////Exit/////////////////////////
Exit::Exit()
{
    font->loadFromFile("/home/roma/Project/src/fonts/porter-sans-inline-block.otf");
    text->setFont(*font);
    text->setString("EXIT");
    sf::FloatRect bounds = text->getLocalBounds();
    text->setPosition(WIDTH / 2 - bounds.width, 540);
    text->setFillColor(sf::Color(110, 8, 8));
    text->setCharacterSize(200);
    text->setStyle(sf::Text::Bold);
}
Exit::~Exit() {}
/////////////////////////Exit/////////////////////////
