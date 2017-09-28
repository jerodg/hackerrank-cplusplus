//
// Created by jerod on 7/10/2017.
//

#include <sstream>
#include <vector>
#include <iostream>

using namespace std;


vector<int> parseInts(string str) {
    vector<int> vect;
    stringstream ss(str);

    int i;

    while (ss >> i) {
        vect.push_back(i);
        if (ss.peek() == ',' || ss.peek() == ' ') {
            ss.ignore();
        }
    }
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
