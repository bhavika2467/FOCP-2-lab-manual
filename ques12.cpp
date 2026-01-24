/*
. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
check the triangle type based on its sides.
*/
#include<iostream>
using namespace std ;
int main(){
    int s1 ,s2,s3 ;
   cout<<" enter all 3 sides :" ;
   cin>>s1>>s2>>s3 ;
if (s1+s2+s3==180 ){
    if(s1==s2 &&s2==s3) {
        cout<<"equilateral triangle ";
    }
    else if (s1==s2 &&s2!=s3) {
        cout<<"isosceles triangle" ;
    }
    else {
        cout<<"scalene triangle ";
    }
}
}