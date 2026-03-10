#include<iostream>
using namespace std;
class Course{
    string courseName;
    string instructorName;
    int duration;
public:
    Course(string c, string i, int d){
        courseName = c;
        instructorName = i;
        duration = d;
    }
    void display(){
        cout<<"Course Name: "<<courseName<<endl;
        cout<<"Instructor: "<<instructorName<<endl;
        cout<<"Duration: "<<duration<<" weeks"<<endl;
    } 
     ~Course(){
        cout<<"Course object deleted"<<endl;
    } 
};
int main(){
    Course c1("C++ Programming", "Rahul", 6);
    Course c2("Data Structures", "Anita", 8);
    cout<<"Course 1 Details"<<endl;
    c1.display();
    cout<<"Course 2 Details"<<endl;
    c2.display();
    return 0;
}