#include <iostream>

using namespace std;


int main () {

    int nota;

    cout << "Ingrese su nota del curso de Calculo: ";
    cin >> nota;

    if (nota < 0 || nota > 100) {
        cout << "Nota invalida" << endl;

        return 1; // Salir con error
    }

    else if (nota >=90){

        cout << 'A' << endl;
    }
    
    else if (nota >=80) {

        cout << 'B' << endl;
    }

    else if (nota >=70) {

        cout << 'C' << endl;
    }

    else if (nota >=60) {

        cout << 'D' << endl;
    }

    else {

        cout << 'F' << endl;
    }



    return 0;
}