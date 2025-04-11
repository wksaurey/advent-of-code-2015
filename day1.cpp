#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("input/day1.txt");

    if (!file.is_open()) {
        std::cerr << "Error opening the file!";
        return 1;
    }

    std::string line;

    while (getline(file, line))
        std::cout << line << std::endl;

    file.close();
    return 0;
}
