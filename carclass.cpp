#include<iostream>
#include<string>
using namespace std;

class Car { 
    public :
    string name ;
    int price;
    float seat ;
    string type;
};
void print (Car c) {
    cout<<c.name<<endl<<c.price<<endl<<c.seat<<endl<<c.type;
}
void change(Car c ) { // pass by value (no change ) ----CORRECT----->> void change(Car& c)
    //Car& c ----> pass by refernce isme innova print ho jaayega 
    c.name="innova"
}
int main() {
    Car c1 ;
    c1.name="XUV";
    c1.price=10;
    c1.seat=8;
    c1.type="suv"
    print(c1);
    change(c1);
    print(c1);
}