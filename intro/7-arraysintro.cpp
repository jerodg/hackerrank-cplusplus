#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    int l;
    cin >> l;

    int ar[l];

    std::string numbers_str;
    getline(std::cin, numbers_str, 'q');

    int number;
    int el = l;
    for (std::istringstream numbers_iss(numbers_str); numbers_iss >> number;) {
        el--;
        ar[el] = number;
    }

    for (int i = 0; i <= l - 1; i++) {
        cout << ar[i] << " ";
    }
}
