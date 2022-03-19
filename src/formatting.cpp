/**
 * @file formatting.cpp
 * @author Arisien (arisien@vivaldi.net)
 * @brief Implementation of ANSI formatting.
 * @version 0.1
 * @date 2022-03-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "formatting.hpp"

std::string ansi (char color, bool bold, bool bright, bool bg) {
    char hue = color + 30 + 10*bg + 60*bright;

    std::string escape = "\e[" + std::to_string(bold) + ";" + std::to_string(hue) + "m";

    return escape;
}

std::string Escape::get () {
    return ansi(color, bold, bright, bg);
}