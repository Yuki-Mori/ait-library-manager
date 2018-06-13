#include "Init.hpp"
#include "def.h"

//*****debug****//
#ifdef TEST
#include <iostream>
#endif
//*****debud****//

using namespace ait;
using namespace std;

Init::Init(void){

}
Init::~Init(void){

}
int Init::done(std::vector<std::string>& args){
	#ifdef TEST
		cout << "Init class" << endl;
	#endif
	return 0;
}
