/**
 * @file manager.hpp
 * @author Arisien (arisien@vivaldi.net)
 * @brief Definition of CommandManager class.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef TODO_MANAGER_HPP
#define TODO_MANAGER_HPP

#include <vector>
#include <string>
#include <map>

#include "commands.hpp"

typedef void (*function) (std::vector<std::string>);

class CommandManager {
    private:
        std::map<std::string, function> commands;

        void add (std::string name, function callback);

        function get (std::string name);
    public:
        CommandManager();

        void run (int argc, char** argv);

};

#endif