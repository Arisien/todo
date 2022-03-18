/**
 * @file manager.cpp
 * @author Arisien (arisien@vivaldi.net)
 * @brief Implementation of CommandManager methods.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "manager.hpp"

CommandManager::CommandManager () {
    add("help", &fn_help);
    add("list", &fn_list);
    add("add", &fn_add);
    add("edit", &fn_edit);
    add("delete", &fn_delete);
    add("clear", &fn_clear);    
}

void CommandManager::add (std::string name, function callback) {
    commands.insert(std::pair<std::string, function>(name, callback));
}

function CommandManager::get (std::string name) {
    std::map<std::string, function>::iterator ptr = commands.find(name);
    if (ptr == commands.end()) return &fn_help;
    return ptr->second;
}

void CommandManager::run (int argc, char** argv) {
    std::vector<std::string> args;
    std::string name;

    if (argc < 2) {
        name = "list";
        args = std::vector<std::string>(1);
        args.push_back("3");
    }

    else {
        args = std::vector<std::string>(argc-2);
        name = argv[1];

        for (int i = 2; i < argc; i++) {
            args.push_back(argv[i]);
        }
    }

    get(name)(args);
}

