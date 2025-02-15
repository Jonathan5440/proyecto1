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
int numero1, factorial=1;
cout << "ingrese un numero para calcula su facotorial:";
for (int i = 1; i <= numero1; i++) {
    factorial *= i;
}
cout << "El factorial de " << numero1 << " es: " << factorial << endl;
// Fibonacci
int n, a = 0, b = 1, c;
cout << "Ingrese cuántos términos de la serie Fibonacci desea ver: ";
cin >> n;
cout << "Serie Fibonacci: " << a << " " << b << " ";
for (int i = 2; i < n; i++) {
    c = a + b;
    cout << c << " ";
    a = b;
    b = c;
}
cout << endl;


// Numero Primo o No
int nPrimo, ePrimo = 1;
cout << "\nIngrese un número para verificar si es primo: ";
cin >> nPrimo;
if (numPrimo < 2) {
    ePrimo = 0;
} else {
    for (int i = 2; i * i <= nPrimo; i++)
        {if (nPrimo % i == 0) {

            ePrimo = 0;
            break;
        }
    }
}
if (ePrimo) {
    cout << numPrimo << " es un número primo." << endl;
} else {
    cout << numPrimo << " no es un número primo." << endl;
}
//numero par o impar
   int numPar;
cout << "\nIngrese un número para verificar si es par o impar: ";
cin >> numPar;
if (numPar % 2 == 0) {
    cout << numPar << " es un número par." << endl;
} else {
    cout << numPar << " es un número impar." << endl;
}

// Generar tabla de multiplicar del numero deseado
int numTabla;
cout << "\nIngrese un número para mostrar su tabla de multiplicar: ";
cin >> numTabla;
for (int i = 1; i <= 10; i++) {
    cout << numTabla << " x " << i << " = " << numTabla * i << endl;
}

return 0;}
