#include "Parser.hpp"

//*****debug****//
#include <iostream>
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
    std::cout << "command = " <<  command << std::endl;
    std::cout << "args = ";
    for(auto i = 0; i < args.size(); i++){
        std::cout << args[i] << " ";
    }
    std::cout << std::endl;
    /********************************************************************/
    /*********************** Debug code ended ***************************/
    /********************************************************************/
    return 0;
}
