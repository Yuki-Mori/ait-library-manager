#include "Init.hpp"
#include "def.h"

#include <iostream>

using namespace ait;
using namespace std;

Init::Init(void){

}
Init::~Init(void){

}
int Init::done(std::vector<std::string>& args){
	#ifdef TEST
		cout << "Init class" << endl;
	#else
		cout << "Type 'hrp2' directory: " << endl;
	#endif
	return 0;
}
