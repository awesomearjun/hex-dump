#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    if (argc == 1) {
        std::cerr << "Error: no file included" << std::endl;
        return 0;
    }
    
    std::ifstream file(argv[2]);

    if (!file.is_open()) {
        std::cerr << "Error: problem with opening file, maybe file path is wrong" << std::endl;
        return 0;
    }

    std::cout << argc << std::endl;
    return 0;
}