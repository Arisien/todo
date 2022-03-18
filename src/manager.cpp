#include <vector>
#include <string>
#include <map>

typedef void (*function) (std::vector<std::string>);

class CommandManager {
    private:
        std::map<std::string, function> commands;
        function fn_default;
    public:
        CommandManager () {
            // ADD ALL COMMANDS
        }

        void add (std::string name, function callback) {
            commands.insert(std::pair<std::string, function>(name, callback));
        }

        function get (std::string name) {
            std::map<std::string, function>::iterator ptr = commands.find(name);
            if (ptr == commands.end()) return fn_default;
            return ptr->second;
        }

        void run (int argc, char** argv) {
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

};

