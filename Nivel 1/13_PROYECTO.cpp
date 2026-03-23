#include <iostream>
using namespace std;

int main () {

    int numero;
    int opcion;
    int suma = 0;

    while(true){

        cout << " 1. Ingresar numero" << endl;
        cout << " 2. Mostrar suma" << endl;
        cout << " 3. Salir" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;


        if (opcion == 1){


            cout << "Ingrese un numero: ";
            cin >> numero;
            suma += numero;

        }

        else if (opcion == 2){

            cout << "La suma actual es: " << suma << endl;

        }

        else if (opcion == 3){

            cout << "Saliendo del programa..." << endl;
            break;

        }

        else {

            cout << "Opcion no valida. Por favor, intente de nuevo." << endl;
        }



    }

    return 0;
    
}