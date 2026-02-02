/*
A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
• Contain at least one uppercase letter (A–Z)
• Contain at least one lowercase letter (a–z)
• Contain at least one digit (0–9)
• Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application.
*/

//classwork
/*#include<iostream>
using namespace std;
int main () {
string batch = "abcdefghijklmnopqrstuvwxyz123456789";
for(int i=0;i<batch.length();i++) {
    if( batch[i]>='0' && batch[i]<='9'){
        cout<<batch[i]<<endl;
    }
    if(batch[i]=='a'||batch[i]=='e'||batch[i]=='i'||batch[i]=='o'||batch[i]=='u'||batch[i]=='A'||batch[i]=='E'||batch[i]=='I'||batch[i]=='O'||batch[i]=='U') {
        cout<<batch[i]<<endl;
    }
}
}*/

#include<iostream>
using namespace std;
int main()
{
    string password;
    int lower=0, upper=0, digit=0, specialChar=0;
    cout<<"Enter your password: ";
    cin>>password;
    for(int i=0; i<password.length(); i++)
    {
        if(password[i]>='a' && password[i]<='z')
        lower=1;
        else if(password[i]>='A' && password[i]<='Z')
        upper=1;
        else if(password[i]>='0' && password[i]<='9')
        digit=1;
        else
        specialChar=1;
    }
    if(lower && upper && digit && specialChar)
    {cout<<"Valid Password";}
    else
    {cout<<"Invalid Password";}
}