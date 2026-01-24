/*
A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    double d, r1, r2;

    cout << "Enter a b c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if (d >= 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are:\n";
        cout << r1 << " " << r2;
    }
    else {
        cout << "Roots are not real";
    }

    return 0;
}
