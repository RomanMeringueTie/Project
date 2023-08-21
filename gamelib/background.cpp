#include <unistd.h>
#include <background.hpp>

/////////////////////////Rink/////////////////////////
Rink::Rink() {}

Rink::~Rink() {}

void Rink::draw(sf::RenderWindow &window)
{
    sf::Texture rink_t;
    rink_t.loadFromFile("/home/roma/Project/src/pictures/rink.png");
    sf::Sprite rink_s(rink_t);
    rink_s.setPosition(0, 0);
    window.draw(rink_s);
}
/////////////////////////Rink/////////////////////////

/////////////////////////SoundSwitch/////////////////////////
SoundSwitch::SoundSwitch() : buffer(new sf::SoundBuffer), sound(new sf::Sound)
{
    this->buffer = new sf::SoundBuffer;
    this->sound = new sf::Sound;
    buffer->loadFromFile("/home/roma/Project/src/audio/switch.wav");
    sound->setBuffer(*buffer);
}

SoundSwitch::~SoundSwitch()
{
    delete sound;
    delete buffer;
}

sf::Sound *SoundSwitch::get_sound() { return sound; }
/////////////////////////SoundSwitch/////////////////////////

/////////////////////////Menu/////////////////////////
Menu::Menu() {}

Menu::~Menu() {}

void Menu::draw(sf::RenderWindow &window)
{
    sf::Texture background_t;
    background_t.loadFromFile("/home/roma/Project/src/pictures/background.jpg");
    sf::Sprite background_s(background_t);
    window.draw(background_s);
    sf::Texture player_t;
    player_t.loadFromFile("/home/roma/Project/src/pictures/player.png");
    sf::Sprite player_s(player_t);
    window.draw(player_s);
}
/////////////////////////Menu/////////////////////////