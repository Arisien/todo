/**
 * @file commands.hpp
 * @author Arisien (arisien@vivaldi.net)
 * @brief Definitions for all Commands.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef TODO_COMMANDS_HPP
#define TODO_COMMANDS_HPP

#include <iostream>
#include <vector>
#include <string>

#include "formatting.hpp"

/**
 * @brief Command that explains program usage.
 * 
 * @param args Command arguments.
 */
void fn_help (std::vector<std::string> args);

/**
 * @brief Command for listing future tasks.
 * 
 * @param args Command arguments.
 */
void fn_list (std::vector<std::string> args);

/**
 * @brief Command for adding a new task to the list.
 * 
 * @param args Command arguments.
 */
void fn_add (std::vector<std::string> args);

/**
 * @brief Command for editing existing task.
 * 
 * @param args Command arguments.
 */
void fn_edit (std::vector<std::string> args);

/**
 * @brief Command for removing a task from the list.
 * 
 * @param args Command arguments.
 */
void fn_delete (std::vector<std::string> args);

/**
 * @brief Command for clearing the list of tasks.
 * 
 * @param args Command arguments.
 */
void fn_clear (std::vector<std::string> args);

#endif