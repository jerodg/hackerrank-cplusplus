//
// Created by jerod on 7/11/2017.
//
#include <cmath>
#include <iostream>

using namespace std;

// code here

template<class T>
class AddElements {
    T element;
public:
    AddElements(T arg) { element = arg; }

    T add(T element) { return AddElements::element + element; }

    T concatenate(T element) { return AddElements::element + element; }
};

// end code here


int main() {
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        string type;
        cin >> type;
        if (type == "float") {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        } else if (type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        } else if (type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
