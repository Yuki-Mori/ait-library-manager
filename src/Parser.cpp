#include "Parser.hpp"
#include "def.h"

//*****debug****//
#ifdef TEST
#include <iostream>
#endif
//*****debud****//

using namespace ait;
using namespace std;

Parser::Parser(string& command, vector<string>& args): command(command), args(args){
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
    #endif
    /********************************************************************/
    /*********************** Debug code ended ***************************/
    /********************************************************************/
    return 0;
}
