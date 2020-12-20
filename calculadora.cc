#include <iostream>

using namespace std;

int suma(int i, int j) { return i + j; }

int main() {
    int i = 0, j = 0;

    cout << "Ingrese el primer valor: ";
    cin >> i;
    cout << "Ingrese el segundo valor: ";
    cin >> j;

    cout << "La suma es: " << suma(i,j) << endl;
    return 0;
}