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
        string dir_name;
        if(args.size() == 0){
	    	cout << "Tell your 'hrp2' directory. " << endl;
            cout << "{your directory}/hrp2" << endl;
            cout << "{your directory} = ";
            cin >> dir_name;
        }else{
            dir_name = args[0];
        }
        while(1){
            cout << dir_name << "/hrp2  ...OK?[Y/n]" << endl; 
            string ans;
            cin >> ans;
            if(ans == "Y" || ans == "y"){
                //TODO make successfull work
                break;
            }else if(ans == "n"){
                cout << "Please try again." << endl;
                return 1;
            }else{
                cout << "command is only Y or n." << endl;
                continue;
            }
        }
	#endif
	return 0;
}
