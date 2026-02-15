/*
Problem 2: Swap Mechanisms
Implement two functions:
void swapByValue(int a, int b);
void swapByReference(int &a, int &b);
Demonstrate the difference between the two approaches.
Input Format:
Two integers a b
Output Format:
Print values after each swap attempt.
*/ 



#include<iostream>
using namespace std ;
void swapByValue(int a, int b){  //call by value 
a=a+b;
b=a-b;
a=a-b;
}
void swapByReference(int &a, int &b){ //call by reference 
a=a+b;
b=a-b;
a=a-b; }
void swapByAddress(int *a , int*b) { // call by address
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}
int main() {
    int a ,b;
    cout<<"enter a and b : ";
    cin>>a>>b;
    cout << "\nBefore swap: a = " << a << " , b = " << b << endl;
    swapByValue(a, b);
    cout << "After swapByValue (in main): a = " << a << " , b = " << b << endl;
    swapByReference(a, b);
    cout << "After swapByReference (in main): a = " << a << " , b = " << b << endl;
    swapByAddress(&a ,&b);
    cout << "After swapByReference (in main): a = " << a << " , b = " << b << endl;
}
// Call by Reference → original values change HO jayengi
// Call by Value → original values change NAHI hongi
