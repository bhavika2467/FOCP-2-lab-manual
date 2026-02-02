/*
A supermarket software maintains item price lists. Implement a solution to store the prices of 10
items in an array and display the maximum price.
*/
#include<iostream>
using namespace std;
int main() {
    float b[10];
    for(int i=0;i<10;i++){
        cin>>b[i];
    }
    int max;
    max=b[0];
    for(int i=0;i<10;i++){
        if(max<b[i]){
            max=b[i];
        }
    }
    cout<<max<<endl;
}