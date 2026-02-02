/*
A stock market app tracks first and second highest stock values. Implement a solution to find the largest
and second largest number in an array of size 5.
*/
#include<iostream>
using namespace std;
int main() {
    float b[10];
    for(int i=0;i<10;i++){
      cin>>b[i];
    }
    int max = -1, smax = -1 ;
    for(int i = 0; i <10; i++) {
        if(b[i] > max) {
            smax = max;
            max = b[i];
        }
        else if(b[i] > smax && b[i] != max) {
            smax = b[i];
        }
    }
    cout << "Maximum: " << max << endl;
    cout << "Second Maximum: " << smax << endl;
return 0;
}
