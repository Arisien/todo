#include "file.hpp"

std::vector<std::string> task_read () {
    std::vector<std::string> tasks = std::vector<std::string>();

    FILE* file = fopen("./.todo", "rb");

    if (!file) return tasks;

    int size;
    while (fread(&size, sizeof(int), 1, file)) {
        char task[size+1];
        task[size] = '\0';
        fread(&task[0], sizeof(char), size, file);
        tasks.push_back(std::string(task));
    }

    return tasks;
}

void task_write (std::string task) {
    FILE* file = fopen("./.todo", "ab");

    if (!file) return;

    int size = task.length();

    fwrite(&size, sizeof(int), 1, file);
    fwrite(&task[0], sizeof(char), size, file);

    fclose(file);
}

void task_clear () {
    fclose(fopen("./.todo", "wb"));
}