#include <iostream>
using namespace std;
class Table
{
private:
    string material;
    int price;
    int legs;
public:
    Table()
    {
        material = "Wood";
        price = 5000;
        legs = 4;
    }
    Table(string m, int p)
    {
        material = m;
        price = p;
        legs = 4;   
    }
    Table(string m, int p, int l)
    {
        material = m;
        price = p;
        legs = l;
    }
    void display()
    {
        cout << "Material: " << material << endl;
        cout << "Price: " << price << endl;
        cout << "Number of Legs: " << legs << endl;
    
    }
};

int main()
{
    Table t1;                      
    Table t2("Steel", 7000);       
    Table t3("Glass", 10000, 3);   

    cout << "Table 1 Details:" << endl;
    t1.display();

    cout << "Table 2 Details:" << endl;
    t2.display();

    cout << "Table 3 Details:" << endl;
    t3.display();

    return 0;
}