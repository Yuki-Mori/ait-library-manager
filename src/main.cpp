#include <iostream>
#include <string>
#include <vector>
#include <getopt.h>

using namespace std;

int main(int argc, char* argv[]){
    int opt;
    
    opterr = 0;
    string option;

    while((opt = getopt(argc, argv, "v")) != -1){
        switch(opt) {
            case 'v':
                option = string("Version");
                break;
            default:
                option = string("help");
                break;
        }
    }

//    for(i = optind; i < argc; i++){
//        cout << "arg = " << argv[i] << ", " << i << endl;
//    }
    string command = (optind < argc) ? string(argv[optind]) : "Not Found";
    vector<string> args(0);
    for(int i = optind + 1; i < argc; i++){
        args.push_back(string(argv[i]));
    }
    cout << "command = " <<  command << endl;
    cout << "args = ";
    for(auto i = 0; i < args.size(); i++){
        cout << args[i];
    }
    cout << endl;
    return 0;
}
