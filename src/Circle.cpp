#include <SFML/Graphics.hpp>
#include <iostream>

int HEIGHT = 400;
int WIDTH = 800;
float shapeRadius = 120;

int main()
{
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "SFML Circle");
    sf::CircleShape shape;
    shape.setRadius(shapeRadius);
    shape.setPointCount(200);
    shape.setPosition(WIDTH/2, HEIGHT/2);
    shape.setOrigin(shapeRadius, shapeRadius);
    std::cout << shape.getOrigin().x << std::endl;
    shape.setOutlineColor(sf::Color::Blue);
    shape.setFillColor(sf::Color::Green);
    shape.setOutlineThickness(5);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
