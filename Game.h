//
// Created by Paul Baker on 1/15/18.
//

#ifndef PROCEDURAL_GENERATION_GAME_H
#define PROCEDURAL_GENERATION_GAME_H


#include <memory>
#include <string>
#include "SFML/Graphics/RenderWindow.hpp"

class Game {
public:
    Game(std::string title);

    ~Game();

private:
    sf::RenderWindow m_window;
};


#endif //PROCEDURAL_GENERATION_GAME_H
