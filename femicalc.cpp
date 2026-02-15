/*
Problem 4: EMI Calculator
Create a function:
double calculateEMI(double P, double R = 0.01, int T = 12);
Use the standard EMI formula.
Input Format:
Principal amount P
(Optional) Interest rate R
(Optional) Tenure T
Output Format:
Print EMI up to two decimal places
*/
#include<iostream>
#include<cmath>
using namespace std;
double calculateEMI(double P, double R = 0.01, int T = 12) {
    double emi;
    emi = (P * R * pow(1 + R, T)) / (pow(1 + R, T) - 1);
    return emi;
}
int main() {
    double P, R;
    int T;
    cout << "Enter Principal amount: ";
    cin >> P;
    cout << "Enter monthly interest rate (e.g 0.01 for 1%): ";
    cin >> R;
    cout << "Enter tenure in months: ";
    cin >> T;
    double result = calculateEMI(P, R, T);
    cout << "EMI is: " << result << endl;
    return 0;
}
