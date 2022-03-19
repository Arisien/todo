#ifndef TODO_FILE_HPP
#define TODO_FILE_HPP

#include <fstream>
#include <vector>
#include <string>

/**
 * @brief Reads all tasks from todo list.
 * 
 * @return std::vector<std::string> The tasks.
 */
std::vector<std::string> task_read ();

/**
 * @brief Writes new task into todo list.
 * 
 * @param task The task
 */
void task_write (std::string task);

/**
 * @brief Clears all tasks from todo list.
 * 
 */
void task_clear ();

#endif