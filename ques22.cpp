// diamond shape 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {   //upper
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--) { //lower
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
