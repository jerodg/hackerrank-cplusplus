//
// Created by jerod on 7/11/2017.
//

#include <iostream>

using namespace std;

class Rectangle {
public:
    virtual void display() {
        cout << width << " " << height << endl;
    }

    int width, height;
};

class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }

    void display() {
        cout << width * height << endl;
    }
};

int main() {
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}