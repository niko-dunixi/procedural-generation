//
// Created by Paul Baker on 1/15/18.
//


#include "Game.h"

Game::Game(std::string title) : m_window(sf::VideoMode::getDesktopMode(), title, sf::Style::Default) {

}

Game::~Game() {
    m_window.close();
}
