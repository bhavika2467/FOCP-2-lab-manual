/*
The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.
*/
#include<iostream>
using namespace std;
int main() {
    int a[5];
    for(int i=0;i<5;i++){
    cin>>a[i];
    }
    int total=0 ;
    int percentage;
    for(int i=0;i<5;i++){
        total+=a[i];
    }
    percentage = (total/500) *100;
    cout<<total<<endl;
    cout<<percentage<<endl;
}
