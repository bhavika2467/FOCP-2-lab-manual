/*
 A manufacturing QC system checks defect codes divisible by both 3 and 5.
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5.
*/
#include<iostream>
using namespace std;
int main(){
  int b[5];
 int count=0;
    for(int i=0;i<5;i++){
        cin>>b[i];
    }
    for(int i=0;i<5;i++){
        if(b[i]%3==0 && b[i]%5==0){
            cout<<b[i]<<endl;
count++;
        }
    }
    cout<<count<<endl;
}