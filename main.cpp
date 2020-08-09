#include <iostream>
#include <cstdlib>
#include <fstream>
#include <map>
#include <string>

int main(int argc, char* argv[])
{
	if (argc == 1) {
		std::cout << "no options file specified and no option specified" << std::endl;
	}
	else if (argc == 2) {
		std::cout << "no option specified" << std::endl;
	}
	std::map<std::string, std::string> optionsMap;

	std::string filename = argv[1];
	std::ifstream file(filename);
	std::string option, path, line;
	while (std::getline(file, line)) {
		auto firstSpace = line.find_first_of(' ', 0);
		option = line.substr(0, firstSpace);
		path = line.substr(firstSpace + 1);
        optionsMap[option] = path;
	}

	if (optionsMap.find(argv[2]) != optionsMap.end()) {
		std::string exec = optionsMap[argv[2]];
		for (int i = 3; i < argc; i++) {
			exec += " " + std::string(argv[i]);
		}
		system(exec.c_str());
	}
	else {
		std::cout << "invalid option 2" << std::endl;
	}
	return 0;
}
