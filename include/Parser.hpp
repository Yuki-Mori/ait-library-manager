#pragma once
#include <string>
#include <vector>
#include <map>
#include <memory>
#include "Command.hpp"

namespace ait{
    typedef std::shared_ptr<Command> CommandType;
    class Parser{
        std::string command;
        std::vector<std::string> args;
        std::map<std::string, CommandType> commands;

    public:
        Parser(std::string& command, std::vector<std::string>& args);
        Parser(void);
        int done(void);
    };
}
