#include <atomic>
#include <iostream>
using namespace std;

int main () {
    cout << "Tablas del 4 y 6" << endl;
    cout << "Tabla del 4:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "4 x" <<i<< "="<<4* i << endl;
    }
    cout << "tabla del 6"<< endl;
    for (int i = 1; i <= 10; i++) {
        cout << "6 x"<<i<< "="<<6* i << endl;
    }

cout << endl;

}

// Calcular factorial

long long factorial(int n) {
    long long facto = 1;
    for (int i = 1; i <= n; i++) {
        facto *= i;
    }
    return facto;
}


