#include <iostream>

using namespace std;

int suma(int i, int j) { return i + j; }
int resta(int i, int j) { return i - j; }

int main() {
    int i = 0, j = 0;
    int select = 1;

    cout << "¿Que quieres hacer?" << endl
        << "1-SUMAR | 2-RESTAR" << endl;
    cin >> select;

    cout << "Ingrese el primer valor: ";
    cin >> i;
    cout << "Ingrese el segundo valor: ";
    cin >> j;

    if(select == 1)
        cout << "La suma es: " << suma(i,j) << endl;
    else if(select == 2)
        cout << "La resta es: " << resta(i,j) << endl;
    else 
        cout << "Opcion incorrecta" << endl;
    return 0;
}