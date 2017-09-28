//
// Created by jerod on 7/12/2017.
//
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    copy_n(std::istream_iterator<int>(std::cin), n, back_inserter(v));
    sort(v.begin(), v.end());
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

    return 0;
}

//template<typename T>
//std::vector<T> split(const std::string& line) {
//    std::istringstream is(line);
//    return std::vector<T>(std::istream_iterator<T>(is), std::istream_iterator<T>());
//}

//  another way to cin with lambda
//    const auto n = []() -> int {
//        int t;
//        cin >> t;
//        return t;
//    }();

//int main() {
//    const auto x = [](int t) { return std::cin >> t, move(t); }({});
//
//    cin.ignore();
//    vector<int> v;
//
//    string input;
//    std::getline(std::cin, input);
//    std::istringstream iss(input);
//    int i2;
//    while (iss >> i2) {
//        v.push_back(i2);
//    }
//
//    sort(v.begin(), v.end());
//
//    std::ostringstream oss;
//    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(oss, ";"));
//
//    std::string result( oss.str() );
//    std::cout << result << "\n";
//
//    return 0;
//}

