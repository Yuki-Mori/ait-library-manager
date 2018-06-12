#include "Parser.hpp"

using namespace ait;
using namespace std;

Parser::Parser(string& command, vector<string>& args): command(command), args(args){
}

Parser::Parser(void){}

bool Parser::done(void){
    return false;
}
