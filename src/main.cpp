#include "commands.cpp"
#include "manager.cpp"

int main (int argc, char** argv) {
    CommandManager manager = CommandManager();

    manager.run(argc, argv);

    return 0;
}