/*
Rectangle Calculator
Scenario:
Calculate area and perimeter of a rectangle.
Class Name:
Rectangle
Attributes:
•	float length
•	float width
Methods:
•	void inputDimensions()
•	float calculateArea()
•	float calculatePerimeter()
•	void displayResult()
*/
#include<iostream>
using namespace std;
class Rectangle {
    float length;
    float breadth;
   public : 
   void inputDimensions() {
    cout<<"enter l,b";
    cin>>length>>breadth;
   }
   float calculateArea() {
    return length*breadth;
   }
   float calculatePerimeter() {
    return 2*(length+breadth);
   }
   void displayResult()  {
        cout << "Area = " << calculateArea() << endl;
        cout << "Perimeter = " << calculatePerimeter() << endl;
    }
};
int main(){
     Rectangle r1;   // object

    r1.inputDimensions();
    r1.displayResult();
}