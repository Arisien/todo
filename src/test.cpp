/**
 * @file test.cpp
 * @author Arisien (arisien@vivaldi.net)
 * @brief Random test file (no use)
 * @version 0.1
 * @date 2022-03-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "formatting.cpp"
#include "file.cpp"

#include <iostream>
#include <cstdio>

int main (void) {
    std::string str = ansi(RED, 1, 1, 0) + "todo: " RESET " current tasks\n";

    task_clear();
    task_write("ekse dee");

    std::vector<std::string> tasks = task_read();
    for (int i = 0; i < tasks.size(); i++) {
        for (int j = 0; j < tasks[i].size(); j++) {
            std::printf("%x ", tasks[i][j]);
        }
        // std::cout << tasks[i] << std::endl;
    }
}