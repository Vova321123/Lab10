//
// Created by demyk on 21.11.2023.
//

#include "lab10_4.h"#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double m = 2.0;
    const double x = 1.1;
    double a = sqrt(abs(x));
    double b = pow(x, 4) + pow(m, 2);
    double y = cos(2 * (a + sin(b)));

    cout << "Значення функції y = F(x): " << y << endl;

    return 0;
}

