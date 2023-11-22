//
// Created by demyk on 21.11.2023.
//

#include "lab10_3.h"
#include <iostream>
#include <cmath>

using namespace std;

double formula1(double alpha) {
    return sin(M_PI / 2 + 3 * alpha) / (1 - sin(3 * alpha - M_PI));
}

double formula2(double alpha) {
    return cos(54 * M_PI / 180 + 3 * alpha * M_PI / 180) / cos(32 * alpha * M_PI / 180);
}

int main() {
    double alpha;

    cout << "Введіть значення для alpha в градусах: ";
    cin >> alpha;

    double result1 = formula1(alpha);
    double result2 = formula2(alpha);

    cout << "Результат за першою формулою: " << result1 << endl;
    cout << "Результат за другою формулою: " << result2 << endl;

    return 0;
}
