/*
. A data processing system classifies even and odd inputs separately. Implement a solution to
store 5 elements in an array, compute sum of all even and sum of all odd numbers.
*/
#include<iostream>
using namespace std;
int main () {
    int c[5];
    int sume=0;
    int sumo=0;
    for(int i=0;i<5;i++) {
        cin>>c[i];
    }
    for(int i=0;i<5;i++){
        if(c[i]%2==0){
sume+=c[i];
        }
        if(c[i]%2!=0){
            sumo+=c[i];
        }
    }
    cout<<sume<<endl;
    cout<<sumo<<endl;
}