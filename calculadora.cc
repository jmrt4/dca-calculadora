#include <iostream>

using namespace std;

int suma(int i, int j) { return i + j; }
int resta(int i, int j) { return i - j; }
int multiplica(int i, int j) { return i * j; }
int cociente(int i, int j) { return i / j; }
int resto(int i, int j) { return i % j; }

int main() {
    int i = 0, j = 0;
    int select = 1;

    cout << "¿Que quieres hacer?" << endl
        << "1-SUMAR | 2-RESTAR | 3-MULTIPLICAR | 4-COCIENTE | 5-RESTO" << endl;
    cin >> select;

    cout << "Ingrese el primer valor: ";
    cin >> i;
    cout << "Ingrese el segundo valor: ";
    cin >> j;

    if(select == 1)
        cout << "La suma es: " << suma(i,j) << endl;
    else if(select == 2)
        cout << "La resta es: " << resta(i,j) << endl;
    else if(select == 3)
        cout << "La multiplicacion es: " << multiplica(i,j) << endl;
    else if(select == 4)
        cout << "El cociente es: " << cociente(i,j) << endl;
    else if(select == 5)
        cout << "El resto es: " << resta(i,j) << endl;
    else 
        cout << "Opcion incorrecta" << endl;
    return 0;
}