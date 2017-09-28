//
// Created by jerod on 7/5/2017.
//

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class Person {

public:
    string name;
    int age;

    virtual void getdata() {}

    virtual void putdata() {}

};


class Professor : public Person {
public:
    int publications, pro_id;
    static int pro_cur_id;

    virtual void getdata() {
        pro_cur_id++;
        cin >> name >> age >> publications;
        pro_id = pro_cur_id;
    }

    virtual void putdata() {
        cout << name << " " << age << " " << publications << " " << pro_id << "\n";
    }
};

int Professor::pro_cur_id = 0;


class Student : public Person {
public:
    int marks[6], stu_id;
    static int stu_cur_id;

    virtual void getdata() {
        stu_cur_id++;
        cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
        stu_id = stu_cur_id;
    }

    void putdata() {
        int sum = 0;

        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }

        cout << name << " " << age << " " << sum << " " << stu_id << "\n";
    }

};

int Student::stu_cur_id = 0;


int main() {

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++) {

        cin >> val;
        if (val == 1) {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        } else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
