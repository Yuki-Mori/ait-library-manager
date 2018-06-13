#include <iostream>
#include <string>
#include <vector>
#include <getopt.h>

#include "../include/def.h"
#include "../include/Parser.hpp"

using namespace std;
using namespace ait;

int version(void);
int help(void);

int main(int argc, char* argv[]){
    int opt;

    opterr = 0;
    string option;

    while((opt = getopt(argc, argv, "v")) != -1){
        switch(opt) {
            case 'v':
                return version();
                break;
            default:
                return help();
                break;
        }
    }
    string command = (optind < argc) ? string(argv[optind]) : "Not Found";
    vector<string> args(0);
    for(int i = optind + 1; i < argc; i++){
        args.push_back(string(argv[i]));
    }

    Parser p(command, args);
    return p.done();
}

int version(void){
    cout << "1.0.0.0-alpha" << endl;
    return 0;
}

int help(void){
    cout << "usage: TODO " << endl;
    return 0;
}
