/*
A network security system generates prime numbers in a range for encryption key pools. Implement a
solution to find all prime numbers within a given range.
*/
#include<iostream>
using namespace std;
int main () {
    int num ;
    cout<<"enter a number :";
    cin>>num;
    int flag =1 ;
    for(int i=2;i<num/2;i++) {
  if(num % i == 0) {
            flag = 0;   
            break;
        } }
    if(num < 2)
        flag = 0;
    if(flag == 1)
        cout << "Prime number";
    else
        cout << "Not prime";
    return 0;
}

    
