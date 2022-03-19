/**
 * @file commands.cpp
 * @author Arisien (arisien@vivaldi.net)
 * @brief Implementations of all Commands.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "commands.hpp"

void fn_help (std::vector<std::string> args) {
    std::cout << ansi(RED, 1, 1, 0) + "todo:" RESET " to be implemented." << std::endl; 
}

void fn_list (std::vector<std::string> args) {
    std::vector<std::string> tasks = task_read();

    if (tasks.size() == 0) {
        std::cout << ansi(RED, 1, 1, 0) + "todo:" RESET " there is nothing to do." << std::endl;
    }

    else {
        std::cout << ansi(RED, 1, 1, 0) + "todo:" RESET " current tasks." << std::endl;
        for (int i = 0; i < tasks.size(); i++) {
            std::cout << "[" << i+1 << "] " << tasks[i] << std::endl;
        }
    }
}

void fn_add (std::vector<std::string> args) {
    std::string task = std::string();
    for (int i = 0; i < args.size() - 1; i++) {
        if (args[i].size() == 0) continue;
        task += args[i] + " ";
    }
    task += args[args.size()-1];
    task_write(task);
    std::cout << ansi(RED, 1, 1, 0) + "todo:" RESET " task added to list." << std::endl; 
}

void fn_edit (std::vector<std::string> args) {

}

void fn_delete (std::vector<std::string> args) {

}

void fn_clear (std::vector<std::string> args) {
    task_clear();
    std::cout << ansi(RED, 1, 1, 0) + "todo:" RESET " tasks cleared from list." << std::endl; 
}