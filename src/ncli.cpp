#include <iostream>
#include "analysis.h"
#include "INIReader.h"

int main(int argc, char** argv){
	if (argc != 2) {
	std::cout << "invalid number of arguments provided" << std::endl;
        return 1;
    }
    const char* option = argv[1];

    if (option == "macro") {
        compareMacro();
    } else if (option == "min") {
        compareMinerals();
    } else {
	    std::cout << "Invalid arguments specified. Usage : ncli macro/min" << std::endl;
	return 1;
    }
		return 0;
}
