//
// Created by jerod on 7/10/2017.
//

#include<bits/stdc++.h>

using namespace std;

//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's l
// int getBreadth (); // Return box's b
// int getHeight ();  //Return box's h
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
public:
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }

    Box(int len, int bre, int hei) {
        l = len;
        b = bre;
        h = hei;
    }

    Box(const Box &B);

    int getLength() { return l; }

    int getBreadth() { return b; }

    int getHeight() { return h; }

    long long CalculateVolume() const {
        return (long long) l * b * h;
    }

    friend ostream &operator<<(ostream &os, Box &B);

    bool operator<(const Box &B) {
        if (l < B.l)
            return true;
        else if (b < B.b && l == B.l)
            return true;
        else return h < B.h && b == B.b && l == B.l;
    }

private:
    int l, b, h;
};

Box::Box(const Box &B) :
        l(B.l), b(B.b), h(B.h) {}

ostream &operator<<(ostream &out, Box &B) {
    out << B.l << " " << B.b << " " << B.h;
    return out;
}

void check2() {
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            cout << temp << endl;
        }
        if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp) {
                cout << "Lesser\n";
            } else {
                cout << "Greater\n";
            }
        }
        if (type == 4) {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5) {
            Box NewBox(temp);
            cout << NewBox << endl;
        }

    }
}

int main() {
    check2();
}