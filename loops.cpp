#include <iostream>

using namespace std;

int main(){
    int start = 0;
    int startDo = 10;

    cout << "WHILE LOOP" << endl;
    while (start < 10){  //Mientras start sea igual a 0 se ejecuta el bloque de codigo
        cout << start << endl;
        start++; // start es igual a start + 1
    }

    cout << "DO WHILE LOOP" << endl;
    do{
        cout << startDo << endl;
        startDo -= 1; // startDo es igual a startDo - 1
    } while (startDo > 0); // Ejecuta el bloque y luego comprueba si la condicion es cierta

    cout << "FOR LOOP" << endl;
    for (int i = 0; i < 8; i++){ // para i = 0, si i < 10; a cada iteracion sumale 1 a i; ejecuta el codigo.
        cout << "hola "<< i + 1 << endl;

    }

    return 0;
}