#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

int main() {
    std::ifstream file("input/day2.txt");

    if (!file.is_open()) {
        std::cerr << "Error opening the file!";
        return 1;
    }

    std::string line;
    int result = 0;
    while (getline(file, line)) {
        std::stringstream ss(line);
        int nums[3];
        std::string value;
        int index = 0;

        while (getline(ss, value, 'x')) {
            nums[index] = std::stoi(value);
            index++;
        }

        int l = nums[0];
        int w = nums[1];
        int h = nums[2];
        // std::cout << l << 'x' << w << 'x' << h << '\n';

        int volume = l * w * h;

        int max = std::max(l, w);
        max = std::max(max, h);

        int ribbon = 2 * (l + w + h - max) + volume;
        // std::cout << "Ribbon: " << ribbon << std::endl;

        result += ribbon;
        
    }

    std::cout << "Result: " << result << std::endl;

    file.close();
    return 0;
}
