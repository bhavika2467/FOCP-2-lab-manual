/*
A board displays reverse seating layouts for events. Implement a solution to print:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/
#include<iostream>
using namespace std;
int main () {
int n ;
cin>>n;
for (int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
        cout<< j ;
    }
    cout<<endl;
}

/*
Q20. A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
int b;
cin>>b;
for (int i=1;i<=b;i++){
for(int j=1;j<=5;j++){
    cout<< j ;
}
cout<<endl;
}
}

