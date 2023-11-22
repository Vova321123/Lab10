//
// Created by demyk on 21.11.2023.
//

#include "lab10_1_2.h"
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<double> marks;
    double mark;

    cout << "Введіть оцінки з п'яти предметів:\n";

    for (int i = 0; i < 5; ++i) {
        cout << "Оцінка " << i + 1 << ": ";
        cin >> mark;
        marks.push_back(mark);
    }

    double average = accumulate(marks.begin(), marks.end(), 0.0) / marks.size();

    cout << "Середній бал: " << average << endl;

    return 0;
}


