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
        std::cout << l << 'x' << w << 'x' << h << '\n';

        int surface_area = 2*(l*w + w*h + h*l);

        int max = std::max(l, w);
        max = std::max(max, h);

        int extra = 0;
        if (l == max)
            extra = w*h;
        if (w == max)
            extra = l*h;
        if (h == max)
            extra = l*w;
        
        std::cout << line << '\n';
        // std::cout << surface_area + extra << " = " << surface_area << " + " << extra << "\n\n";
        result += surface_area + extra;
        // 586244 too low
        // 33496016 too high
        // 1586333 too high
    }

    std::cout << "Result: " << result << std::endl;

    file.close();
    return 0;
}
