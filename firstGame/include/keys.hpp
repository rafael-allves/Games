#pragma once
#include <map>
#include <functional>
#include <SFML/Graphics.hpp>

extern std::map<int, std::function<void(sf::RenderWindow&)>> keys;

void InitializeKeys() {
    keys[sf::Keyboard::Escape] = [](sf::RenderWindow& window) {
        window.close();
    };
}
