//
// Created by jerod on 7/10/2017.
//
#include <iostream>
#include <sstream>

using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    void set_age(int x) {
        age = x;
    }

    int get_age() {
        return age;
    }

    void set_standard(int x) {
        standard = x;
    }

    int get_standard() {
        return standard;
    }

    void set_first_name(string x) {
        first_name = x;
    }

    string get_first_name() {
        return first_name;
    }

    void set_last_name(string x) {
        last_name = x;
    }

    string get_last_name() {
        return last_name;
    }

    string to_string() {
        stringstream x;
        x << age << "," << first_name << "," << last_name << "," << standard << "\n";
        return x.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
