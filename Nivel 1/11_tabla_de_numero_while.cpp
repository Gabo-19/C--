#include <iostream>
using namespace std;


int main() {

    int numero;

    cout <<"Ingrese un numero: ";
    cin >> numero;

    int i =1;

    while (i <=10){

        cout << numero << " x " << i << " = " << numero * i << endl;

        i++;
    }

    return 0;
}