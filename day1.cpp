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
    int floor {0};

    while (getline(file, line))
        for (int index = 0; index < line.length(); index++) {
            if (line[index] == '(') 
                floor++;
            else if (line[index] == ')')
                floor--;
            if (floor == -1) {
                std::cout << "Basement:" << index+1 << std::endl;
                return 0;
            }
        }

    std::cout << "Floor:" << floor << std::endl;
    file.close();
    return 0;
}
