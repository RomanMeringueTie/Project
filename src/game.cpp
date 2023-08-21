#define HEIGHT 1080
#define WIDTH 1920
#include "player.hpp"
#include "background.hpp"
#include "text.hpp"

int menu(sf::RenderWindow &window)
{
    Menu menu;
    menu.draw(window);
    SoundSwitch sound;
    Play play;
    window.draw(*(play.get_text()));
    Exit exit;
    window.draw(*(exit.get_text()));
    while (1)
    {
        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            sound.get_sound()->play();
            window.clear();
            menu.draw(window);
            play.set_on();
            exit.set_off();
            window.draw(*(play.get_text()));
            window.draw(*(exit.get_text()));
            window.display();
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            sound.get_sound()->play();
            window.clear();
            menu.draw(window);
            exit.set_on();
            play.set_off();
            window.draw(*(play.get_text()));
            window.draw(*(exit.get_text()));
            window.display();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && exit.is_on())
        {
            window.clear();
            window.close();
            return 0;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && play.is_on())
        {
            window.clear();
            return 0;
        }
    }
    return 0;
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(16, 9), "Game", sf::Style::Fullscreen);
    menu(window);
    Body body;
    Stick stick;
    Rink rink;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::MouseButtonPressed)
                window.close();
        }
        rink.draw(window);
        body.draw(window);
        stick.draw(window);
        window.display();
        body.move();
        stick.move();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.clear();
            menu(window);
        }
        window.clear();
    }
    return 0;
}
