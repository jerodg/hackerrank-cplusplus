#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    int n[2];

    for (int i = 0; i < 2; i++) {
        cin >> n[i];
    }

    int a = n[0];
    int b = n[1];

    // for(int i = 0; i < 2; i++){
    //     cout << i << "\n";
    // }
    // cout << a << "\n";
    // cout << b << "\n";    

    for (int i = a; i < b + 1; i++) {
        // cout << i << "\n";    
        if (i >= 1 && i <= 9) {
            if (i == 1) {
                cout << "one\n";
            } else if (i == 2) {
                cout << "two\n";
            } else if (i == 3) {
                cout << "three\n";
            } else if (i == 4) {
                cout << "four\n";
            } else if (i == 5) {
                cout << "five\n";
            } else if (i == 6) {
                cout << "six\n";
            } else if (i == 7) {
                cout << "seven\n";
            } else if (i == 8) {
                cout << "eight\n";
            } else if (i == 9) {
                cout << "nine\n";
            }
        } else if (i > 9) {
            // even
            if (i % 2 == 0) {
                cout << "even\n";
            } else {
                cout << "odd\n";
            }
        }
    }


}
