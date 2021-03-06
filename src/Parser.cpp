#include "Parser.hpp"
#include "def.h"
#include "Init.hpp"

//*****debug****//
#ifdef TEST
#include <iostream>
#endif
//*****debud****//

using namespace ait;
using namespace std;

Parser::Parser(string& command, vector<string>& args): command(command), args(args){
    //CommandInterface cm(new Command());
    this->commands["default"] = CommandType(new Command());
    this->commands["init"] = CommandType(new Init());
}

Parser::Parser(void){}

int Parser::done(void){
    /********************************************************************/
    /********************* Debug code started ***************************/
    /********************************************************************/
    #ifdef TEST
    std::cout << "command = " <<  command << std::endl;
    std::cout << "args = ";
    for(auto i = 0; i < args.size(); i++){
        std::cout << args[i] << " ";
    }
    std::cout << std::endl;
    this->commands["default"]->done(args);
    this->commands["init"]->done(args);

    #else

    auto itr=this->commands.find(command);
    if(itr != this->commands.end()){
        return itr->second->done(args);
    }else{
        return this->commands["default"]->notFoundMessage(command);
    }

    #endif
    /********************************************************************/
    /*********************** Debug code ended ***************************/
    /********************************************************************/
    return 0;
}
