#pragma once
#include <string>
#include <vector>

namespace ait{
    class Parser{
        std::string command;
        std::vector<std::string> args;

    public:
        Parser(std::string& command, std::vector<std::string>& args);
        Parser(void);
        int done(void);
    };
}
