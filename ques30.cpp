/*
A payroll system maintains employee salary records. Implement a solution to accept salary of
10 employees in an array, compute total salary and average salary, then display the result.
*/
#include<iostream>
using namespace std;
int main() {
    int s[10];
    for(int i=0;i<10;i++){
        cin>>s[i];
    }
    int total ;
    for(int i=0;i<10;i++){
    total+=s[i];}
    int average ;
    average=total/10;
    cout<<total<<endl;
    cout<<average<<endl;
}