#include<iostream>
using namespace std ;
int main() {
    int a ,b,temp;
    cout<<"enter a : "<<endl<<"enter b : "<<endl ;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a: "<<a<<"b: "<<b;

    int x , y ;
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x: "<<x<<"y"<<y;
}