#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    problemSolution1(29.9);
    cout << "Problem 2\n";
    problemSolution2(12, 13, 14);
    cout << "Problem 3\n";
    problemSolution3(180, 'M');
    cout << "Problem 4\n";
    problemSolution4("18:12:13:14:13:15");
    cout << "Problem 5\n";
    problemSolution5(5, 6, '*');
    return 0;
}