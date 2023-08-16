#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Audio.hpp>
#define HEIGHT 1080
#define WIDTH 1920

int menu(sf::RenderWindow &window)
{
    // sf::SoundBuffer buffer;
    // if (!buffer.loadFromFile("music.wav"))
    //     return -1;
    // sf::Sound sound;
    // sound.setBuffer(buffer);
    // sound.setVolume(10);
    // sound.play();
    sf::Texture t;
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("audio/switch.wav"))
        return -1;
    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.setVolume(5);
    t.loadFromFile("pictures/background.jpg");
    sf::Sprite s(t);
    window.draw(s);
    sf::Texture h;
    h.loadFromFile("pictures/player.png");
    sf::Sprite n(h);
    n.setPosition(0, 0);
    window.draw(n);
    sf::Font font;
    if (!font.loadFromFile("fonts/porter-sans-inline-block.otf"))
    {
        return -1;
    }
    sf::Text play;
    play.setFont(font);
    play.setString("PLAY");
    sf::FloatRect bounds = play.getLocalBounds();
    play.setPosition(WIDTH / 2 - bounds.width, 540 - 300);
    play.setFillColor(sf::Color(110, 8, 8));
    play.setCharacterSize(200);
    play.setStyle(sf::Text::Bold);
    window.draw(play);
    sf::Text exit;
    exit.setFont(font);
    exit.setString("EXIT");
    exit.setPosition(WIDTH / 2 - bounds.width, 540);
    exit.setFillColor(sf::Color(110, 8, 8));
    exit.setCharacterSize(200);
    exit.setStyle(sf::Text::Bold);
    window.draw(exit);
    while (1)
    {
        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            sound.play();
            window.clear();
            sf::Texture t;
            t.loadFromFile("pictures/background.jpg");
            sf::Sprite s(t);
            window.draw(s);
            sf::Texture h;
            h.loadFromFile("pictures/player.png");
            sf::Sprite n(h);
            n.setPosition(0, 0);
            window.draw(n);
            play.setStyle(sf::Text::Italic);
            play.setFillColor(sf::Color::Red);
            exit.setStyle(sf::Text::Bold);
            exit.setFillColor(sf::Color(110, 8, 8));
            window.draw(play);
            window.draw(exit);
            window.display();
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            sound.play();
            window.clear();
            sf::Texture t;
            t.loadFromFile("pictures/background.jpg");
            sf::Sprite s(t);
            window.draw(s);
            sf::Texture h;
            h.loadFromFile("pictures/player.png");
            sf::Sprite n(h);
            n.setPosition(0, 0);
            window.draw(n);
            exit.setStyle(sf::Text::Italic);
            exit.setFillColor(sf::Color::Red);
            play.setStyle(sf::Text::Bold);
            play.setFillColor(sf::Color(110, 8, 8));
            window.draw(play);
            window.draw(exit);
            window.display();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && exit.getStyle() == sf::Text::Italic)
        {
            window.clear();
            window.close();
            return 0;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && play.getStyle() == sf::Text::Italic)
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
    sf::CircleShape shape(30);
    shape.setFillColor(sf::Color::Red);
    while (window.isOpen())
    {
        sf::Texture t;
        t.loadFromFile("pictures/rink.png");
        sf::Sprite s(t);
        s.setPosition(0, 0);
        window.draw(s);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::MouseButtonPressed)
                window.close();
        }
        window.draw(shape);
        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            shape.move(-1, 0);
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            shape.move(1, 0);
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            shape.move(0, -1);
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            shape.move(0, 1);
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.clear();
            menu(window);
        }
        window.clear();
    }
    return 0;
}
