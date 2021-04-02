#include <SFML/Graphics.hpp>
#include <string>

class MouseSprite{
    public:
        sf::Sprite mouse;
        sf::Texture mousetexture;
        sf::Vector2f scale = sf::Vector2f(1, 1);

        MouseSprite(){
            MouseSet();
        }

        void MouseSet()
        {
            mousetexture.loadFromFile("sprites/mouse.png");
            mouse.setTexture(mousetexture);
            mouse.setScale(scale);
            mouse.setOrigin(25/2, 25/2);
        }
};

class TargetSprite{
    public:
        sf::Sprite target;
        sf::Texture targettexture;
        sf::Vector2f scale = sf::Vector2f(1, 1);

        TargetSprite(){
            TargetSet();
        }

        void TargetSet()
        {
            targettexture.loadFromFile("sprites/target.png");
            target.setTexture(targettexture);
            target.setScale(scale);
            target.setOrigin(25/2, 25/2);
        }
};