//
// Created by demyk on 21.11.2023.
//

#include "Lab10_2.h"
#include <iostream>
#include <cmath>

using namespace std;

double calculateHeight(double a, double area) {
    return 2 * area / a;
}

double calculateBisector(double a, double b, double c) {
    return sqrt(a * b * (1 - pow(c, 2) / pow((a + b), 2)));
}

int main() {
    double a, b, c;
    double area, height, bisector;

    cout << "Введіть довжину сторони a: ";
    cin >> a;
    cout << "Введіть довжину сторони b: ";
    cin >> b;
    cout << "Введіть довжину сторони c: ";
    cin >> c;

    // Розрахунок площі трикутника за формулою Герона
    double s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    height = calculateHeight(a, area);
    bisector = calculateBisector(a, b, c);

    cout << "Висота h: " << height << endl;
    cout << "Бісектриса w_c: " << bisector << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

double calculateHeight(double a, double area) {
    return 2 * area / a;
}

double calculateBisector(double a, double b, double c) {
    return sqrt(a * b * (1 - pow(c, 2) / pow((a + b), 2)));
}

int main() {
    double a, b, c;
    double area, height, bisector;

    cout << "Введіть довжину сторони a: ";
    cin >> a;
    cout << "Введіть довжину сторони b: ";
    cin >> b;
    cout << "Введіть довжину сторони c: ";
    cin >> c;

    // Розрахунок площі трикутника за формулою Герона
    double s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    height = calculateHeight(a, area);
    bisector = calculateBisector(a, b, c);

    cout << "Висота h: " << height << endl;
    cout << "Бісектриса w_c: " << bisector << endl;

    return 0;
}


