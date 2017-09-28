#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream stream(input);

    int n;
    int t;
    while (stream >> n) {
        t = n + t;
    }

    std::cout << t;

    return 0;
}
