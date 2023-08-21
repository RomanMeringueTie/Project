#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Text.hpp>
#define HEIGHT 1080
#define WIDTH 1920

class Button
{
protected:
    sf::Text *text;
    sf::Font *font;

public:
    Button();
    ~Button();
    sf::Text *get_text();
    void set_on();
    void set_off();
    bool is_on();
};

class Play : public Button
{
public:
    Play();
    ~Play();
};

class Exit : public Button
{
public:
    Exit();
    ~Exit();
};