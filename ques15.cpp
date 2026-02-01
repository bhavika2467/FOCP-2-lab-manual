/*
A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;
    int num, max;
    cout << "Enter number 1 : ";
    cin >> max;                
    for(int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if(num > max) {
            max = num;  }   }
    cout << "Largest number is: " << max;
    return 0;}