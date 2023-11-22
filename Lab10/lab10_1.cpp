//
// Created by demyk on 21.11.2023.
//

#include "lab10_1.h"
#include <iostream>

using namespace std;

double optimalWeight(string sex, double height, int age) {
    if (sex == "male") {
        return 50 + (height - 150) * 0.52 + (age - 21) / 4.0;
    } else if (sex == "female") {
        return 50 + (height - 150) * 0.75 + (age - 21) / 5.0;
    } else {
        cout << "Неправильно введено стать" << endl;
        return 0.0;
    }
}

int main() {
    string sex;
    double height;
    int age;

    cout << "Введіть стать (male/female): ";
    cin >> sex;

    cout << "Введіть зріст у сантиметрах: ";
    cin >> height;

    cout << "Введіть вік: ";
    cin >> age;

    double result = optimalWeight(sex, height, age);

    if (result != 0.0) {
        cout << "Оптимальна вага: " << result << " кг" << endl;
    }

    return 0;
}
