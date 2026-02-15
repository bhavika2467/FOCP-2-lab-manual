/*
Problem 1: Prime Check
Write a function bool isPrime(int n) that determines whether a given integer is
prime.
Input Format:
Single integer n
Output Format:
Print Prime or Not Prime
Constraints:
-10⁹ ≤ n ≤ 10⁹
*/
#include<iostream>
using namespace std ;
bool isPrime(int n ){
 if(n <= 1)          
        return false;
    for(int i = 2; i<=n/2; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n ;
cout<<"enter number : ";
cin>>n;
if(isPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";
}

