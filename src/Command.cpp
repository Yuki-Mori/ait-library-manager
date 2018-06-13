#include "Command.hpp"
#include "def.h"

#include <iostream>

using namespace ait;
using namespace std;

Command::Command(void):args(){}

Command::Command(std::vector<std::string>& args):args(args){}

Command::Command(const Command& orig):args(orig.args){}

Command::~Command(void){}

Command& Command::operator=(const Command& orig){
	//:TODO あとでやる
	return *this;
}
int Command::done(std::vector<std::string>& args){
	#ifdef TEST
		cout << "Command class" << endl;
	#else
		//cout << "Command not found." << endl;
	#endif
	return 0;
}

int Command::notFoundMessage(string& command_name){
	cout << "Command not found: " << command_name << endl;
	return 1;
}
