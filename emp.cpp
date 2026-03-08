/*
Employee Information System
Scenario:
Store employee details and calculate annual salary.
Class Name:
Employee
Attributes:
•	int empId
•	string name
•	double monthlySalary
Methods:
•	void inputDetails()
•	double calculateAnnualSalary()
•	void displayDetails()
*/
#include<iostream>
using namespace std;
class Employee{
    int empId;
    string name ;
    double monthlySalary;
    public :
    void inputDetails(){
        cout<<"enter empId"<<"enter name "<<"enter sal";
        cin>>empId>>name>>monthlySalary;
    }
    double calculateAnnualSalary(){
        return monthlySalary*12;
    }
    void displayDetails(){
    cout<<"emp id :"<<empId<<endl<<"name"<<name<<endl<<"salary"<<monthlySalary<<endl;
    cout<<"annual salary :"<<calculateAnnualSalary();
    } };
    int main (){
       Employee e1; 
    e1.inputDetails();
    e1.displayDetails();
}