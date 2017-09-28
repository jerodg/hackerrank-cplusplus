//
// Created by jerod on 7/10/2017.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <array>
#include <numeric>

using namespace std;


class Student {
    int score[5];

public:
    void input() {
        for (auto &i : score)
            std::cin >> i;
    }

    int calculateTotalScore() const {
        return std::accumulate(std::begin(score), std::end(score), 0);
    }
};


//class Student {
//private:
//    string scores;
//
//public:
//    void input() {
//        getline(cin, scores);
//    }
//
//    int calculateTotalScore(){
//        std::stringstream stream(scores);
//
//        int sum = 0;
//        int x = 0;
//
//        while (stream >> x) {
//            sum+=x;
//        }
//        cout << sum << "\n";
//        return sum;
//    }
//
//};


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
