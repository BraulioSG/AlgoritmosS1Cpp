#include <iostream>

using namespace std;

int main(){
    int numero = 0, numeroFactores = 0;

    cout << "Ingrese N: "; cin >> numero;
    cout << "Ingrese n de factores "; cin >> numeroFactores;

    for (int i = 1; i <= numeroFactores; i ++ ){
        int resultado = numero * i; 
        cout << numero << " x " << i << " = " << resultado << endl;
    }
}