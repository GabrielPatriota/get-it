#include <SFML/Graphics.hpp>
#include <string>

#include "sprites.hpp"

class WindowCreate{
    private:
        int maximumX = 600;
        int maximumY = 400;
        MouseSprite mousesp;
        TargetSprite targetsp;
    public:
        int windowHeight = 400;
        int windowWidth = 600;
        std::string windowName = "Get It!";
        WindowCreate(){
            CreateWindow();
        }

        void CreateWindow()
        {
            sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), windowName, sf::Style::Close);

            window.setMouseCursorVisible(false);
            targetsp.target.setPosition(window.getSize().x/2, window.getSize().y/2);

            while(window.isOpen()){
                sf::Event event;

                while(window.pollEvent(event)){
                    if(event.type == sf::Event::Closed){
                        window.close();
                    }
                }

                int randomX = std::rand() % maximumX;
                int randomY = std::rand() % maximumY;

                if(mousesp.mouse.getGlobalBounds().intersects(targetsp.target.getGlobalBounds()) && sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                    targetsp.target.setPosition(randomX, randomY);
                }

                mousesp.mouse.setPosition(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);

                window.clear(sf::Color::White);
                window.draw(targetsp.target);
                window.draw(mousesp.mouse);
                window.display();
            }
        }
};