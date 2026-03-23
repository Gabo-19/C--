#include <iostream>
using namespace std;

int main (){

    int numero;

    int suma = 0;

    while (true) {

        cout  << "Ingrese un numero o 0 para finalizar: ";
        cin >> numero;
        
        if (numero <0){

            cout << "Ingrerse un numero postivo o 0 para finalizar: " << endl;  
        }
        else if (numero ==0) {

            

            cout << "La suma total es: " << suma << endl;

            break;
        }
        else {

            suma += numero;
        }
        }

        return 0;
    }




