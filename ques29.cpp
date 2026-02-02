/*
. A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
temperatures in an array and display the minimum temperature for the month
*/
#include<iostream>
using namespace std;
int main() {
    int b[30];
    for(int i=0;i<30;i++){
        cin>>b[i];
    }
    int min;
    min=b[0];
    for(int i=0;i<30;i++){
        if(min>b[i]){
            min=b[i];
        }
    }
    cout<<min<<endl;
}