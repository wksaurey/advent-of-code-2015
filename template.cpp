#include <iostream>
#include <fstream>

int main() {
    // edit input file name
    std::ifstream file("input/day#.txt");

    if (!file.is_open()) {
        std::cerr << "Error opening the file!";
        return 1;
    }

    std::string line;
    while (getline(file, line)) {
        
    }

    file.close();
    return 0;
}
