/*
Function Overloading – Area Calculation
Overload the function area() for:
• Circle (radius)
• Rectangle (length, breadth)
• Triangle (base, height)
Input Format:
Choice
Required parameters
Output Format:
Area of the selected shape
*/
#include<iostream>
using namespace std;
double area(double r) {
    return 3.14 * r * r;
}
double area(double l, double b) {
    return l * b;
}
double area(double base, double height, char type) {
    return 0.5 * base * height;
}
int main() {
    int choice;
    cout<<"Choose Shape:\n";
    cout<<"1 - Circle\n";
    cout<<"2 - Rectangle\n";
    cout<<"3 - Triangle\n";
    cin>>choice;
    if(choice == 1) {
        double r;
        cout<<"Enter radius: ";
        cin>>r;
        cout<<"Area of Circle: "<<area(r);
    }
    else if(choice == 2) {
        double l, b;
        cout<<"Enter length and breadth: ";
        cin>>l>>b;
        cout<<"Area of Rectangle: "<<area(l,b);
    }
    else if(choice == 3) {
   double base, height;
    cout<<"Enter base and height: ";
   cin>>base>>height;
    cout<<"Area of Triangle: "<<area(base,height,'t');
    }
    else {
   cout<<"Invalid Choice!";
    }
}
/*
function overloading - 
Same function name
But different parameters
Different kaam
*/


