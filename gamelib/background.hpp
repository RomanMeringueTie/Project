#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Rink
{
public:
    Rink();
    ~Rink();
    void draw(sf::RenderWindow &window);
};

class SoundSwitch
{
protected:
    sf::SoundBuffer *buffer;
    sf::Sound *sound;

public:
    SoundSwitch();
    ~SoundSwitch();
    sf::Sound *get_sound();
};

class Menu
{
public:
    Menu();
    ~Menu();
    void draw(sf::RenderWindow &window);
};