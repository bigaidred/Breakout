#pragma once

#include <SFML/Graphics.hpp>
#include "CONSTANTS.h"

class Paddle
{
public:
    Paddle(sf::RenderWindow* window);
    ~Paddle();

    void moveLeft(float dt);
    void moveRight(float dt);
    void mouseMove(float xPos);
    void update(float dt);
    void render();
    sf::FloatRect getBounds() const;
    void setWidth(float coeff, float duration);

    bool getMouseControl()
    {
        return _mouseControl;
    }

    void setMouseControl(bool mc)
    {
        _mouseControl = mc;
    }

private:


    sf::RenderWindow* _window;
    sf::RectangleShape _sprite;
    float _width = PADDLE_WIDTH;
    bool _isAlive;
    bool _mouseControl;
    float _timeInNewSize = 0.0f;
};
