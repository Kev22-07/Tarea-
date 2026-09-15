#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (a > b) 
    {
        cout << "El negocio si va a jalar" << endl;
        cout << a - b << endl;
    } 
    else 
    {
        cout << "Dejalo ya esta muerto" << endl;
        cout << b - a << endl;
    }

    return 0;
}
