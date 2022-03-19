/**
 * @file formatting.hpp
 * @author Arisien (arisien@vivaldi.net)
 * @brief Definitions for ANSI formatting.
 * @version 0.1
 * @date 2022-03-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef TODO_FORMATTING_HPP
#define TODO_FORMATTING_HPP

#include <string>

#define RESET "\e[0m"

/**
 * @brief ANSI colors.
 * 
 */
enum Colors {
    BLK, RED, GRN, YEL,
    BLU, MAG, CYN, WHT
};

/**
 * @brief Class representing ANSI escape.
 * 
 */
class Escape {
    public:
        char color = WHT;
        bool bold = false;
        bool bright = false;
        bool bg = false;

        /**
         * @brief Creates escape string from object.
         * 
         * @return std::string String containing escape.
         */
        std::string get();
};

/**
 * @brief Creates ANSI color escape.
 * 
 * @param color From Colors enum.
 * @param bold Whether text should be bold.
 * @param bright Whether text should be bright.
 * @param bg Whether to apply to background instead of text.
 * @return std::string String containing escape.
 */
std::string ansi (char color, bool bold, bool bright, bool bg);

#endif