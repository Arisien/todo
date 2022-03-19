/**
 * @file main.cpp
 * @author Arisien (arisien@vivaldi.net)
 * @brief Program entry point.
 * @version 0.1
 * @date 2022-03-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "formatting.cpp"
#include "commands.cpp"
#include "manager.cpp"

int main (int argc, char** argv) {
    CommandManager manager = CommandManager();

    manager.run(argc, argv);

    return 0;
}