#pragma once

#include <SFML/Graphics.hpp>

namespace WindowSettings
{
    static constexpr unsigned short HEIGHT{ 800 };
    static constexpr unsigned short WIDTH{ 600 };
    static constexpr sf::Vector2u resolution{HEIGHT, WIDTH};

    static const std::string title = "ArcadeMachine";
}