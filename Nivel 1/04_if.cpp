#include <iostream>
using namespace std;

int main() {

    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 0) {
        cout << "Edad no válida" << endl;
        return 1; // Salir con error
    }

    else if (edad == 0) {
        cout << "Recién nacido" << endl;
    }

    else if (edad >= 1 && edad < 13){
        cout << "Niño" << endl;
    }

    else if (edad >= 13 && edad < 18) {
        cout << "Adolescente" << endl;
    }
    
    else {

        cout << "Adulto" << endl;
    }

  
    return 0;
}
