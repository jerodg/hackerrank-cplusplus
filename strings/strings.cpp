//
// Created by jerod on 7/8/2017.
//

#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    cout << a.size() << " " << b.size() << "\n";
    cout << a + b << "\n";

    char c, d;
    c = a[0];
    d = b[0];
    a[0] = d;
    b[0] = c;

    cout << a << " " << b << "\n";

    return 0;
}
