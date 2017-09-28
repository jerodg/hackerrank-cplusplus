#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <sstream>

int main() {

    int n, q, size, value, which, index;
    std::cin >> n >> q;
    std::vector<std::vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        std::cin >> size;
        std::vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            std::cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        std::cin >> which >> index;
        std::cout << nvec[which][index] << std::endl;
    }
    return 0;
}
