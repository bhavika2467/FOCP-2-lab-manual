/*
Modular Calculator
Design a menu-driven calculator. Each operation must be implemented in a
separate function:
1 – Addition
2 – Subtraction
3 – Multiplication
4 – Division
Input Format:
Choice
Two numbers
Output Format:
Result based on selected operation
*/
#include<iostream>
using namespace std;
int addition(int a ,int b ) {
    return a+b;
}
int subtraction(int a ,int b ) {
    return a-b;
}
int multiplication(int a ,int b ) {
    return a*b;
}
int division(int a ,int b ) {
    return a/b;
}
int main () {
    int a ,b ,choice;
    cout<<"Enter choice (1-Addition\n, 2-Subtraction\n, 3-Multiplication\n, 4-Division\n): ";
    cin>>choice;
    cout<<"Enter a: "<<endl<<"enter b : "<<endl;
    cin>>a>>b;
    switch(choice) {
        case 1:
            cout<<"Result: "<<addition(a,b);
            break;
        case 2:
            cout<<"Result: "<<subtraction(a,b);
            break;
        case 3:
            cout<<"Result: "<<multiplication(a,b);
            break;
        case 4:
            if(b != 0) {
            cout<<"Result: "<<division(a,b);}
            else {
            cout<<"Division by zero not allowed!";}
            break;
        default:
            cout<<"Invalid choice!";
    }   }
