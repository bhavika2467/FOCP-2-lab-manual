#include<iostream>
using namespace std;
class Vehicle {
    string vehnum;
    string ownername;
    string vehtype;
    int registrationfee;
    public:
    Vehicle(){
        vehnum="not assigned";
        ownername="unknown";
        vehtype="general";
        registrationfee=0;
    }
    Veicle(string vnum,string oname){
vehnum=vnum;
ownername=oname;
vehtype="general";
registationfee=0;
    }
     Veicle(string vnum,string oname,string vtype,int rf){
vehnum=vnum;
ownername=oname;
vehtype=vtype;
registationfee=rf;
}
void displayResult() {
    cout<<"vehicle num "<<vehnum<<endl;
    cout<<"owner name "<<ownername<<endl;
    cout<<"vehicle type "<<vehtype<<endl;
    cout<<"registration fee "<<registrationfee<<endl
}
};
int main()
{
    // Object using default constructor
    Vehicle v1;

    // Object using 2 parameter constructor
    Vehicle v2("HR26AB1234", "Rahul");

    // Object using 4 parameter constructor
    Vehicle v3("DL10CD5678", "Priya", "Car", 5000);

    cout << "Vehicle 1 Details:" << endl;
    v1.displayVehicle();

    cout << "Vehicle 2 Details:" << endl;
    v2.displayVehicle();

    cout << "Vehicle 3 Details:" << endl;
    v3.displayVehicle();}